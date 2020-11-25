#include <iostream>
#include "EmptyCoursesTree/EmptyCoursesTree.h"


void EmptyCoursesTree::toArrayKElements(const int num, Array<TripletKey>& array,int index)
{
    int array_size=number_of_courses;
    if (number_of_courses>num)
    {
        array_size=num;
    }
    if (num>total_unwatched)
    {
        return; //throw problem
    }
    Array<std::shared_ptr<EmptyCoursesInfo>> unwatched_courses(array_size);
    part_empty_courses.topKElementsToArray(array_size, unwatched_courses,0);
    int fill_this_many;
    int left_to_fill=num;
    for (int i=0;i<array_size;i++)
    {
        int curr_list_size=unwatched_courses[i]->avoided_num;
        fill_this_many=curr_list_size;
        if (left_to_fill<curr_list_size)
        {
            fill_this_many=left_to_fill;
            unwatched_courses[i]->avoided.ListToArrayKelements(index,fill_this_many,array);
            break;
        }
        else
        {
            left_to_fill-=curr_list_size;
            unwatched_courses[i]->avoided.ListToArrayKelements(index,fill_this_many,array);
        }
        index+=fill_this_many;
    }
    return;
}

void EmptyCoursesTree::insertCourse(const int course_id,const int num_of_classes)
{
    if (part_empty_courses.find(course_id)!=nullptr)//in case the course already exists
    {
        return;
    }
    number_of_courses++;
    total_unwatched+=num_of_classes;
    part_empty_courses.insert(course_id, std::shared_ptr<EmptyCoursesInfo>(new EmptyCoursesInfo(num_of_classes,course_id)));
}

void EmptyCoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    if (time==0)
    {
        throw ;//ilegal watch time
    }
    std::shared_ptr<EmptyCoursesInfo>* myCourse = part_empty_courses.find(course_id);
    ListNode<TripletKey>* watched_class_ptr= (*myCourse)->avoided_indexes[class_num];
    if (watched_class_ptr!=nullptr )// in case it is first time viewed
    {
        (*myCourse)->avoided.remove(watched_class_ptr);
        watched_class_ptr=nullptr;
        total_unwatched--;
        (*myCourse)->avoided_num--;
        if ((*myCourse)->avoided_num==0)
        {
            part_empty_courses.erase(course_id);
        }
        
    }
    return ;
}

void EmptyCoursesTree::eraseCourse(const int course_id)
{
    std::shared_ptr<EmptyCoursesInfo>* temp = part_empty_courses.find(course_id);
    if (temp!=nullptr)
    {
        number_of_courses--;
    }
    part_empty_courses.erase(course_id);
}

