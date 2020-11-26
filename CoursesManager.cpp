
#include <iostream>
#include "CoursesManager.h"

StatusType CoursesManager::AddCourse (const int courseID,const int numOfClasses)
{
    if (courseID<=0 || numOfClasses<=0 )
    {
        return INVALID_INPUT;
    }
    try
    {
        if (main_tree.containCourse(courseID) != false)
        {   
            return FAILURE;
        }
        main_tree.insertCourse(courseID, numOfClasses);
        unwatched_tree.insertCourse(courseID, numOfClasses);
    }
    catch(const std::bad_alloc& e)
    {
        return ALLOCATION_ERROR;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;   
}

StatusType CoursesManager::RemoveCourse(const int courseID)
{
    if(courseID<=0)
    {
        return INVALID_INPUT;
    }
    try
    {
        if (main_tree.containCourse(courseID) == false)
        {   
            return FAILURE;
        }
        int num_of_classes=main_tree.getNumOfClasses(courseID);
        unwatched_tree.eraseCourse(courseID);
        int time_of_class;
        for (int i=0;i<num_of_classes;i++)
        {
            time_of_class=main_tree.getTimeOfClass(courseID,i);
            if (time_of_class!=0)
            {
            watched_tree.removeClass(courseID,i,time_of_class);
            }
        }
        main_tree.eraseCourse(courseID);
    }
    catch(const std::bad_alloc& e)
    {
        return ALLOCATION_ERROR;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;   
    
}

StatusType CoursesManager::WatchClass(const int courseID,const int classID,const int time)
{
    if( courseID<=0 || time <= 0)
    {
        return INVALID_INPUT;
    }
    try
    {        
        int time_watched = main_tree.getTimeOfClass(courseID,classID);
        if (time_watched == 0)
        {
            unwatched_tree.watchClass(courseID,classID,time);
        }
        else
        {
             watched_tree.removeClass(courseID, classID, time_watched);
            
        }
        watched_tree.addClassView(courseID, classID, time_watched + time);
        main_tree.watchClass(courseID, classID, time);
        
    }
    catch(const std::bad_alloc& e)
    {
        return ALLOCATION_ERROR;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;   
    
}

StatusType CoursesManager::TimeViewed(const int courseID,const int classID, int *timeViewed)
{
    if(courseID<=0)
    {
        return INVALID_INPUT;
    }
    try
    {
        if (main_tree.containCourse(courseID) == false)
        {   
            return FAILURE;
        }
        if (classID>=main_tree.getNumOfClasses(courseID))
        {
            return INVALID_INPUT;
        }
        *timeViewed=main_tree.getTimeOfClass(courseID,classID);
    }
    catch(const std::bad_alloc& e)
    {
        return ALLOCATION_ERROR;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;   
}

StatusType CoursesManager::GetMostViewedClasses( const int numOfClasses, int *courses, int *classes)
{
    if(numOfClasses <= 0)
    {
        return INVALID_INPUT;
    }
    Array<TripletKey> temp_array(numOfClasses);
    try
    {
        if (main_tree.getTotalNumOfClasses()<numOfClasses)
        {
            return FAILURE;
        }
        int watched_classes=numOfClasses;
        if (numOfClasses>(watched_tree.getSize()))
        {
            watched_classes=watched_tree.getSize();
            unwatched_tree.toArrayKElements(numOfClasses-watched_classes,temp_array,watched_classes);
        }
        watched_tree.topKtoArray(temp_array,watched_classes,0);
        for (int i=0;i<numOfClasses;i++)
        {
            courses[i]=temp_array[i].getCourseId();
            classes[i]=temp_array[i].getClassNum();
        }
    }
    catch(const std::bad_alloc& e)
    {
        return ALLOCATION_ERROR;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return SUCCESS;      
}
