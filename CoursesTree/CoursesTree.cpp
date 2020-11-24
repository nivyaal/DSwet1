#include <iostream>
#include "CoursesTree/CoursesTree.h"

void CoursesTree::insertCourse( const int course_id,const int num_of_classes)
{
    std::shared_ptr<CourseInfo> temp=std::shared_ptr<CourseInfo>(new CourseInfo(num_of_classes,course_id));
    courses.insert(course_id,temp );
}

TripletKey CoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    std::shared_ptr<CourseInfo>* myCourse = courses.find(course_id);
    if (myCourse==nullptr)
    {
        throw; //
    }
    (*myCourse)->classes_array[class_num].addTime(time);
    return (*myCourse)->classes_array[class_num];
}

int CoursesTree::getTimeOfClass(const int course_id,const int class_num) 
 {
     std::shared_ptr<CourseInfo>* course_Info = courses.find(course_id);
     return (*course_Info)->classes_array[class_num].getTime();
 }

 void CoursesTree::eraseCourse(const int course_id)
 {
    courses.erase(course_id);
 }

