#include <iostream>
#include "CoursesTree/CoursesTree.h"

void CoursesTree::insertCourse(const int course_id,const int num_of_classes)
{
    courses.insert(course_id, CoursesNode(num_of_classes,course_id));
}

TripletKey CoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    CoursesNode* myCourse = courses.find(course_id);
    if (myCourse==nullptr)
    {
        throw; //
    }
    myCourse->classes_array[class_num].addTime(time);
    return myCourse->classes_array[class_num];
}

int CoursesTree::getTimeOfClass(const int course_id,const int class_num) 
 {
     CoursesNode* course_node = courses.find(course_id);
     return course_node->classes_array[class_num].getTime();
 }

 void CoursesTree::eraseCourse(const int course_id)
 {
    courses.erase(course_id);
 }

