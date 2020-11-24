#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "../List/List.h"
#include "memory"

class EmptyCoursesTree
{    
    private:
    class EmptyCoursesInfo
    {
        private:
        public:
        ListNode<TripletKey>** avoided_indexes;
        List<TripletKey> avoided;
        int avoided_num;
        int course_id;
        ~EmptyCoursesInfo(){delete[] avoided_indexes;};
        EmptyCoursesInfo():avoided_indexes(nullptr),avoided(List<TripletKey>()),avoided_num(0),course_id(0){};
        EmptyCoursesInfo(const int size,const int course_id):avoided_indexes(new ListNode<TripletKey>*[size])
        {
            avoided_num=size;
            this->course_id=course_id;
            TripletKey temp;
            int i=0;
            int cnt;
            for (int i=0;i<size;i++)
            {
                cnt =size-i-1;
                temp=TripletKey(0,course_id,size-i-1);
                avoided.insertStart(temp);
                avoided_indexes[size-i-1]=avoided.getHead();
            }

        }
        


    };
    AVLtree<int,std::shared_ptr<EmptyCoursesInfo>> part_empty_courses;
    int total_unwatched=0;
    int number_of_courses=0;
    public:
    void toArrayKElements(const int num, TripletKey* array);
    void insertCourse(const int course_id,const int num_of_classes);
    void eraseCourse(const int course_id);
    void watchClass(const int course_id,const int class_num,const int time);
};


#endif