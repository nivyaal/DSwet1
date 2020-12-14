#ifndef COURSESTREE_H_
#define COURSES_TREE_H_
#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "memory"
#include "../Array/Array.h"

class CoursesTree
{    
    private:
    AVLtree<int,std::shared_ptr<Array<int>>> courses;
    int total_num_of_classes=0;

    public:
    void insertCourse(const int course_id,const int num_of_classes);
     bool containCourse(const int course_id);
    void eraseCourse(const int course_id);
    void watchClass(const int course_id,const int class_num,const int time);
    std::shared_ptr<Array<int>> getTimesOfCourse(const int courseID);
    int getTimeOfClass(const int course_id,const int class_num) ;
    int getNumOfClasses(const int course_id);
    int getTotalNumOfClasses(){return total_num_of_classes;};
};



#endif