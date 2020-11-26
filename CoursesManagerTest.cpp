#include "CoursesManager.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define TEST_ADD_REMOVE_PARMATER 5
#define TEST_WATCHCLASS_PARMATER 5
#define POLL 5
int cnt=0;

using namespace std;
typedef enum {
    SUC = 3,
    FAIL = 4,
    NOVALUE = 5,
    INVALID =6
} ResultType;

void writeAdd(ResultType res,int classID,int classNUM);
void writeRemove(ResultType res,int classID);
void writeMost(ResultType res,int num);
void writeWatch(ResultType res,int classID,int classNum,int time);
void writeTimeView(ResultType res,int classID,int classNum,int total_time);
void writeEmptyInit();
void writeReset();
void CheckWatchClass();



void writeAdd(ResultType res,int classID,int classNUM)
{
    if (res==FAIL)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".AddCourse("+to_string(classID)+","+to_string(classNUM)+")==FAILURE);"<<std::endl;
    }
    else if (res==SUC)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".AddCourse("+to_string(classID)+","+to_string(classNUM)+")==SUCCESS);"<<std::endl;
    }
    else if (res==NOVALUE )
    {
        std::cout<<"DS"+to_string(cnt)+".AddCourse("+to_string(classID)+","+to_string(classNUM)+");"<<std::endl;
    }
    else
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".AddCourse("+to_string(classID)+","+to_string(classNUM)+")==INVALID_INPUT);"<<std::endl;
    }
    
    
}
void writeRemove(ResultType res,int classID)
{
    if (res==FAIL)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".RemoveCourse("+to_string(classID)+")==FAILURE);"<<std::endl;
    }
    else if (res==SUC)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".RemoveCourse("+to_string(classID)+")==SUCCESS);"<<std::endl;
    }
    else if (res==NOVALUE )
    {
        std::cout<<"DS"+to_string(cnt)+".RemoveCourse("+to_string(classID)+");"<<std::endl;
    }
    else
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".RemoveCourse("+to_string(classID)+")==INVALID_INPUT);"<<std::endl;
    }
    

}

void writeWatch(ResultType res,int classID,int classNum,int time)
{
    if (res==FAIL)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".WatchClass("+to_string(classID)+","+to_string(classNum)+","+to_string(time)+")==FAILURE);"<<std::endl;
    }
    else if (res==SUC)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".WatchClass("+to_string(classID)+","+to_string(classNum)+","+to_string(time)+")==SUCCESS);"<<std::endl;
    }
    else if (res==NOVALUE )
    {
        std::cout<<"DS"+to_string(cnt)+".WatchClass("+to_string(classID)+","+to_string(classNum)+","+to_string(time)+");"<<std::endl;
    }
    else
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".WatchClass("+to_string(classID)+","+to_string(classNum)+","+to_string(time)+")==INVALID_INPUT);"<<std::endl;
    }
    
    
}
void writeTimeView(ResultType res,int classID,int classNum,int total_time)
{
    if (res==FAIL)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".TimeViewed("+to_string(classID)+","+to_string(classNum)+",timeviewed)==FAILURE);"<<std::endl;
    }
    else if (res==SUC)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".TimeViewed("+to_string(classID)+","+to_string(classNum)+",timeviewed)==SUCCESS);"<<std::endl;
        std::cout<<"ASSERT_TEST(*timeviewed=="+to_string(total_time)+");"<<std::endl;
    }
    else if (res==NOVALUE )
    {
        std::cout<<"DS"+to_string(cnt)+".TimeViewed("+to_string(classID)+","+to_string(classNum)+",timeviewed);"<<std::endl;
    }
    else
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".TimeViewed("+to_string(classID)+","+to_string(classNum)+",timeviewed)==INVALID_INPUT);"<<std::endl;
    }
    

}
void writeEmptyInit()
{
    cnt++;
    std::cout<<"CoursesManager DS"+to_string(cnt)+";"<<std::endl;
}
void writeReset()
{
    for (int i=1;i<2*POLL;i++)
    {
        writeRemove(NOVALUE,i);
    }
}


void CheckAddRemove()
{
    vector<int> v;
    writeEmptyInit();
    for (int i=0;i<TEST_ADD_REMOVE_PARMATER;i++)
    {
        if (i%11==1)
        {
            int a=rand()%2;
            int b=rand()%3;
            int class_num=i;
            int classid=i;
            if (b==3)
            {
                class_num=-class_num;
            }
            else if (b==2)
            {
                classid=-classid;
            }
            else if (b==0||b==1)
            {
                class_num=-class_num;
                classid=-classid;
            }
            if (a%2==1)
            {
                writeAdd(INVALID,classid,class_num);
            }
            else
            {
                if (classid>0)
                {
                    classid=-classid;
                }
                writeRemove(INVALID,classid);
            }
            
        }
        int k=rand() % 3;
        int temp=(rand ()% POLL)+1;
        if (k%2==0)
        {   
            if (std::find(v.begin(), v.end(),temp)!=v.end())
            {
                writeAdd(FAIL,temp,temp);
            }
            else
            {
                writeAdd(SUC,temp,temp);
                v.push_back(temp);
            }
        }
        else
        {
            if (std::find(v.begin(), v.end(),temp)!=v.end())
            {
                writeRemove(SUC,temp);
                v.erase(std::remove(v.begin(), v.end(), temp), v.end());

            }
            else
            {
                writeRemove(FAIL,temp);
            }
        }
        
    }
}
    
    void CheckWatchClass()
{
    //map<COURSEID,map<CLASSNUM,TIME>>
    map<int,map<int,int>> M;
    writeEmptyInit();
    for (int i=0;i<TEST_WATCHCLASS_PARMATER;i++)
    {
        //invalid input
        int time=rand ()% POLL+1;
        int classNum=rand ()% POLL+1;
        int courseID= rand ()% POLL+1;
        int k=rand()%6;

        if (k==4)//remove Course
        {
            
            if (M.find(courseID)!=M.end())
            {
                writeRemove(SUC,courseID);
                M.erase(courseID);
            }
            else
            {
                writeRemove(FAIL,courseID);
            }
            
        }
        else //add
        {
            if (M.find(courseID)==M.end())
            {
                writeAdd(SUC,courseID,classNum);
                map<int,int> temp_map;
                for (int i=0;i<classNum;i++)
                {
                    temp_map[i]=0;
                }
                M[courseID]=temp_map;
            }
            else
            {
                writeAdd(FAIL,courseID,classNum);
            }
            
        }
            int iter=rand()% classNum;
            if (M.find(courseID)!=M.end()&&M[courseID].size()>iter)
            {
                for (int i=0;i<iter;i++)
                {
                    int classtoadd=rand()% classNum;
                    writeWatch(SUC,courseID, classtoadd,time);
                    (M[courseID])[classtoadd]=(M[courseID])[classtoadd]+time;
                    writeTimeView(SUC,courseID,classtoadd,(M[courseID])[classtoadd]);
                }

            }
            else
            {
                if (M[courseID].size()<iter)
                {
                    writeWatch(INVALID,courseID,iter,time);
                    writeTimeView(INVALID,courseID,iter,0);                    
                }
                else
                {
                                    
                    writeWatch(FAIL,courseID,iter,time);
                    writeTimeView(FAIL,courseID,iter,0);
                }

            }
            
    }
     map<int,map<int,int>>::iterator big_it;
        map<int,int>::iterator small_it;

        for (big_it =M.begin(); big_it!=M.end();big_it++) 
        {
            for (small_it=(big_it->second).begin(); small_it!=(big_it->second).end();small_it++)
            {
                writeTimeView(SUC,big_it->first,small_it->first,small_it->second);
            }
        }

}
 
int main()
{
    std::cout<<"#include CoursesManager.h"<<std::endl;
    std::cout<<"int main()"<<std::endl;
    std::cout<<"{"<<std::endl;
    std::cout<<"int* timeviewed=new int;"<<std::endl;
    CheckAddRemove();
    CheckWatchClass();
    std::cout<<"delete timeviewed;"<<std::endl;
    std::cout<<"}"<<std::endl;

}