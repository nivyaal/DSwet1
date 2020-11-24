#ifndef COURSEMANAGER_H_
#define COURSEMANAGER_H_
#include  <iostream>
#include "EmptyCoursesTree/EmptyCoursesTree.h"
#include "SortedTree/SortedTree.h"
#include "CoursesTree/CoursesTree.h"
#include "SpecialNodes.h"

typedef enum {
    SUCCESS = 0,
    FAILURE = -1,
    ALLOCATION_ERROR = -2,
    INVALID_INPUT = -3
} StatusType;

class CoursesManager 
{
    private:
    EmptyCoursesTree unwatched_tree;
    CoursesTree main_tree;
    SortedTree watched_tree;

    public:
    StatusType AddCourse ( const int courseID,const int numOfClasses);
    StatusType RemoveCourse(const int courseID);
    StatusType WatchClass(const int courseID,const int classID,const int time);
    StatusType TimeViewed(const int courseID, const int classID, int *timeViewed);
    StatusType GetMostViewedClasses(const int numOfClasses, int *courses, int *classes);
    void Quit(void** DS);
};

#endif