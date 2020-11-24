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
        int num_of_classes;
        public:
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
        /*
        CourseInfo(const CourseInfo& other )
        {
            classes_array = new TripletKey[other.num_of_classes];
            this->course_id=other.course_id;;
            for (int i=0;i<other.num_of_classes;i++)
            {
                this->classes_array[i]=other.classes_array[i];
            }
        }

        CourseInfo& operator=(const CourseInfo& other )
        {
            delete[] this->classes_array;
            classes_array = new TripletKey[other.num_of_classes];
            this->course_id=other.course_id;;
            for (int i=0;i<other.num_of_classes;i++)
            {
                this->classes_array[i]=other.classes_array[i];
            }
        }*/
    };
    AVLtree<int,std::shared_ptr<CourseInfo>> courses;
    public:
    void insertCourse(const int course_id,const int num_of_classes);
    void eraseCourse(const int course_id);
    TripletKey watchClass(const int course_id,const int class_num,const int time);
    int getTimeOfClass(const int course_id,const int class_num) ;
};



#endif