#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "../List/List.h"
#include "memory"
#include "../Array/Array.h"

    class EmptyCoursesInfo
    {
        private:
        public:
        Array <ListNode<TripletKey>*> avoided_indexes;
        List<TripletKey> avoided;
        int avoided_num;
        int course_id;
        ~EmptyCoursesInfo(){};
        explicit EmptyCoursesInfo(const int size,const int course_id):avoided_indexes(Array<ListNode<TripletKey>*>(size))
        {
            avoided_num=size;
            this->course_id=course_id;
            TripletKey temp;
            int i=0;
            for (int i=0;i<size;i++)
            {
                temp=TripletKey(0,course_id,size-i-1);
                avoided.insertStart(temp);
                avoided_indexes[size-i-1]=avoided.getHead();
            }

        }

    };

class EmptyCoursesTree
{    
    private:

    AVLtree<int,std::shared_ptr<EmptyCoursesInfo>> part_empty_courses;
    int total_unwatched=0;
    int number_of_courses=0;
    public:

    void toArrayKElements(const int num, Array<TripletKey>& array,int index);
    void insertCourse(const int course_id,const int num_of_classes);
    void eraseCourse(const int course_id);
    void watchClass(const int course_id,const int class_num,const int time);
};


#endif