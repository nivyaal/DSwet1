#include <iostream>
#include "CoursesTree/CoursesTree.h"

void CoursesTree::insertCourse( const int course_id,const int num_of_classes)
{
    std::shared_ptr<Array<int>> temp=std::shared_ptr<Array<int>>(new Array<int>(num_of_classes,0));
    courses.insert(course_id,temp );
    total_num_of_classes+=num_of_classes;
}

void CoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    std::shared_ptr<Array<int>>* myCourse = courses.find(course_id);
    (**myCourse)[class_num]+=time;
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
    std::shared_ptr<Array<int>>* temp=courses.find(course_id);
    return (*temp)->getSize();
}

int CoursesTree::getTimeOfClass(const int course_id,const int class_num) 
 {
     std::shared_ptr<Array<int>>* course_Info = courses.find(course_id);
     return (**course_Info)[class_num];
 }

 void CoursesTree::eraseCourse(const int course_id)
 {
     total_num_of_classes-=this->getNumOfClasses(course_id);
    courses.erase(course_id);
    
 }

std::shared_ptr<Array<int>> CoursesTree::getTimesOfCourse(const int courseID)
{
    return (*courses.find(courseID));
}