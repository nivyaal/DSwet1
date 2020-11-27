#include <iostream>
#include "CoursesTree/CoursesTree.h"

void CoursesTree::insertCourse( const int course_id,const int num_of_classes)
{
    std::shared_ptr<CourseInfo> temp=std::shared_ptr<CourseInfo>(new CourseInfo(num_of_classes,course_id));
    courses.insert(course_id,temp );
    total_num_of_classes+=num_of_classes;
}

void CoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    std::shared_ptr<CourseInfo>* myCourse = courses.find(course_id);
    (*myCourse)->classes_array[class_num]+=time;
}

bool CoursesTree::containCourse(const int course_id)
{
    if (courses.find(course_id)==nullptr)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int CoursesTree::getNumOfClasses(const int course_id)
{
    std::shared_ptr<CourseInfo>* temp=courses.find(course_id);
    return (*temp)->num_of_classes;
}

int CoursesTree::getTimeOfClass(const int course_id,const int class_num) 
 {
     std::shared_ptr<CourseInfo>* course_Info = courses.find(course_id);
     return (*course_Info)->classes_array[class_num];
 }

 void CoursesTree::eraseCourse(const int course_id)
 {
     total_num_of_classes-=this->getNumOfClasses(course_id);
    courses.erase(course_id);
    
 }

