
#include "library.h"
#include "CoursesManager.h"

void *Init() {
CoursesManager *DS = new CoursesManager ();
return (void*)DS;
}

StatusType AddCourse(void *DS, int courseID, int numOfClasses) 
{
return ((CoursesManager *)DS)-> AddCourse(courseID, numOfClasses);
}

StatusType RemoveCourse(void *DS, int courseID) 
{
return ((CoursesManager *)DS)-> RemoveCourse(void *DS, int courseID);
}

StatusType WatchClass(void *DS, int courseID, int classID, int time)
{
return ((CoursesManager *)DS)-> WatchClass(void *DS, int courseID, int classID, int time);
}

StatusType TimeViewed(void *DS, int courseID, int classID, int *timeViewed)
{
    return ((CoursesManager *)DS)-> TimeViewed(void *DS, int courseID, int classID, int *timeViewed);
}

StatusType GetMostViewedClasses(void *DS, int numOfClasses, int *courses, int *classes)
{
    return ((CoursesManager *)DS)->GetMostViewedClasses(void *DS, int numOfClasses, int *courses, int *classes)
}
void Quit(void** DS);