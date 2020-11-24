#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"

class CoursesTree
{    
    private:
    
    class CoursesNode
    {
        private:
        public:
        TripletKey* classes_array;
        int course_id;
        CoursesNode(const int size,const int course_id):classes_array(new TripletKey[size]),course_id(course_id)
        {
            TripletKey temp;
            int i=0;
            for (int i=0;i<size;i++)
            {
                classes_array[i].setCourseId(course_id);
                classes_array[i].setClassNum(i);
            }
        }
        ~CoursesNode()
        {
            delete[] classes_array;
        }

    };
    AVLtree<int,CoursesNode> courses;
    public:
    void insertCourse(const int course_id,const int num_of_classes);
    void eraseCourse(const int course_id);
    TripletKey watchClass(const int course_id,const int class_num,const int time);
    int getTimeOfClass(const int course_id,const int class_num) ;
};



#endif