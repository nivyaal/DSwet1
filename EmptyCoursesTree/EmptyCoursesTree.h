#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "../List/List.h"

class EmptyCoursesTree
{    
    private:
    class EmptyCoursesNode
    {
        private:
        public:
        ListNode<TripletKey>** avoided_indexes;
        List<TripletKey> avoided;
        int avoided_num;
        int num_of_classes;
        int course_id;
        ~EmptyCoursesNode(){delete[] avoided_indexes;};
        EmptyCoursesNode():avoided_indexes(nullptr),avoided(List<TripletKey>()),avoided_num(0),num_of_classes(0),course_id(0){};
        EmptyCoursesNode(const int size,const int course_id):avoided_indexes(new ListNode<TripletKey>*[size])
        {
            this->course_id=course_id;
            TripletKey temp;
            int i=0;
            for (int i=0;i<size;i++)
            {
                temp=TripletKey(0,course_id,size-1-i);
                avoided.insertStart(temp);
                avoided_indexes[size-1-i]=avoided.getHead();
            }
        }
        


    };
    AVLtree<int,EmptyCoursesNode> part_empty_courses;
    int total_unwatched=0;
    int number_of_courses=0;
    public:
    void toArrayKElements(const int num, TripletKey* array);
    void insertCourse(const int course_id,const int num_of_classes);
    void eraseCourse(const int course_id);
    void watchClass(const int course_id,const int class_num,const int time);
};


#endif