
#include "library.h"
#include "CoursesManager.h"

void *Init() {
    CoursesManager *DS = new CoursesManager ();
    return (void*)DS;
}

StatusType AddCourse(void *DS, int courseID, int numOfClasses) 
{
    if (DS==nullptr)
    {
        return INVALID_INPUT;
    }
    return ((CoursesManager *)DS)-> AddCourse(courseID, numOfClasses);
}

StatusType RemoveCourse(void *DS, int courseID) 
{
    if (DS==nullptr)
    {
        return INVALID_INPUT;
    }
    return ((CoursesManager *)DS)-> RemoveCourse(courseID);
}

StatusType WatchClass(void *DS, int courseID, int classID, int time)
{
    if (DS==nullptr)
    {
        return INVALID_INPUT;
    }
    return ((CoursesManager *)DS)-> WatchClass( courseID, classID,  time);
}

StatusType TimeViewed(void *DS, int courseID, int classID, int *timeViewed)
{
    if (DS==nullotr)
    {
        return INVALID_INPUT;
    }
    return ((CoursesManager *)DS)-> TimeViewed( courseID,  classID, timeViewed);
}

StatusType GetMostViewedClasses(void *DS, int numOfClasses, int *courses, int *classes)
{
    if (DS==nullptr)
    {
        return INVALID_INPUT;
    }
    return ((CoursesManager *)DS)->GetMostViewedClasses(numOfClasses, courses,classes);
}

void Quit(void** DS)
{
    if(DS== nullptr){
        return;
    }
    auto CourseManager= static_cast<CoursesManager*>(*DS);
    delete CourseManager;
    DS= nullptr;
}