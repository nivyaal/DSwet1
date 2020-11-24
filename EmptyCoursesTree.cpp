#include <iostream>
#include "EmptyCoursesTree/EmptyCoursesTree.h"


void EmptyCoursesTree::toArrayKElements(const int num, TripletKey* array)
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
    EmptyCoursesNode* unwatched_courses=new EmptyCoursesNode[array_size];
    part_empty_courses.topKElementsToArray(array_size, unwatched_courses);
    int left_to_fill,index,fill_this_many;
    for (int i=0;i<array_size;i++)
    {
        int curr_list_size=unwatched_courses[i].avoided_num;
        fill_this_many=curr_list_size;
        if (left_to_fill<curr_list_size)
        {
            fill_this_many=left_to_fill;
            unwatched_courses[i].avoided.ListToArrayKelements(index,fill_this_many,array);
            break;
        }
        else
        {
            left_to_fill-=curr_list_size;
            unwatched_courses[i].avoided.ListToArrayKelements(index,fill_this_many,array);
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
    part_empty_courses.insert(course_id,EmptyCoursesNode(num_of_classes,course_id));
}

void EmptyCoursesTree::watchClass(const int course_id,const int class_num,const int time)
{
    if (time==0)
    {
        throw ;//ilegal watch time
    }
    EmptyCoursesNode* myCourse = part_empty_courses.find(course_id);
    ListNode<TripletKey>* watched_class_ptr= myCourse->avoided_indexes[class_num];
    if (watched_class_ptr!=nullptr )// in case it is first time viewed
    {
        myCourse->avoided.remove(watched_class_ptr);
        watched_class_ptr=nullptr;
        total_unwatched--;
        myCourse->num_of_classes--;
        if (myCourse->num_of_classes==0)
        {
            part_empty_courses.erase(course_id);
        }
        
    }
    return ;
}

void EmptyCoursesTree::eraseCourse(const int course_id)
{
    EmptyCoursesNode* temp = part_empty_courses.find(course_id);
    if (temp!=nullptr)
    {
        total_unwatched-=temp->avoided_num;
    }
    part_empty_courses.erase(course_id);
}