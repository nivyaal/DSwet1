#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "memory"

class CoursesTree
{    
    private:
    
    class CourseInfo
    {
        private:
        public:
        int num_of_classes;
        TripletKey* classes_array;
        int course_id;
        CourseInfo(const int size,const int course_id):classes_array(new TripletKey[size]),course_id(course_id),num_of_classes(size)
        {
            TripletKey temp;
            int i=0;
            for (int i=0;i<size;i++)
            {
                classes_array[i].setCourseId(course_id);
                classes_array[i].setClassNum(i);
            }
        }
        ~CourseInfo()
        {
            delete[] classes_array;
        }
    };
    AVLtree<int,std::shared_ptr<CourseInfo>> courses;
    int total_num_of_classes=0;
    public:
    void insertCourse(const int course_id,const int num_of_classes);
     bool containCourse(const int course_id);
    void eraseCourse(const int course_id);
    TripletKey watchClass(const int course_id,const int class_num,const int time);
    int getTimeOfClass(const int course_id,const int class_num) ;
    int getNumOfClasses(const int course_id);
    int getTotalNumOfClasses(){return total_num_of_classes;};
};



#endif