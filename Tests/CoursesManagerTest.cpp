#include "../CoursesManager.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include<time.h>

#define TEST_ADD_REMOVE_PARMATER 50
#define TEST_WATCHCLASS_PARMATER 50
#define TEST_GETMOST_PARMATER 50
#define POLL 20
int cnt=0;
int line_cnt=0;

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
void writeallocate(int array_size);
void writedeallocate();
void writePrint();

void writePrint(int numOfClasses)
{
    std::cout<<"printFunc("+to_string(numOfClasses)+",courses,classes,myfile);"<<std::endl;
}

void writedeallocate()
{
    std::cout<<"delete[] classes;"<<std::endl;
    std::cout<<"delete[] courses;"<<std::endl;
}
void writeallocate(int array_size)
{
    std::cout<<"classes=new int["+to_string(array_size)+"];"<<std::endl;
    std::cout<<"courses=new int["+to_string(array_size)+"];"<<std::endl;    
}

void writegetMost(ResultType res,int k)
{
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
    if(res==FAIL)
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".GetMostViewedClasses("+to_string(k)+",courses,classes)==FAILURE);"<<std::endl;
    }
    else if (res==SUC)
    {
         std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".GetMostViewedClasses("+to_string(k)+",courses,classes)==SUCCESS);"<<std::endl;
    }
    else if (res==NOVALUE )
    {
        std::cout<<"DS"+to_string(cnt)+".GetMostViewedClasses("+to_string(k)+",courses,classes)"<<std::endl;
    }
    else
    {
        std::cout<<"ASSERT_TEST(DS"+to_string(cnt)+".GetMostViewedClasses("+to_string(k)+",courses,classes)==INVALID_INPUT);"<<std::endl;

    }
    

}

void writeAdd(ResultType res,int classID,int classNUM)
{
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
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
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
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
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
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
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
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
    std::cout<<"//Line Number: "+to_string(line_cnt)<<std::endl;
    line_cnt++;
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
            int a=rand()%3;
            int b=rand()%4;
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
    std::cout<<"/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
            std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
                std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
                    std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
                        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/"<<std::endl;

}
    
    void CheckWatchClass()
{
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
            if (M.find(courseID)!=M.end())
            {
                if (iter>M[courseID].size())
                {
                    writeWatch(INVALID,courseID,iter,time);
                    writeTimeView(INVALID,courseID,iter,0);
                }
                else
                {                
                    for (int i=0;i<iter;i++)
                    {
                        int classtoadd=rand()% iter;
                        writeWatch(SUC,courseID, classtoadd,time);
                        (M[courseID])[classtoadd]=(M[courseID])[classtoadd]+time;
                        writeTimeView(SUC,courseID,classtoadd,(M[courseID])[classtoadd]);
                    }
                }
            }
            else
            {
                if (M.find(courseID)==M.end())
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
        std::cout<<"/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<std::endl;
        std::cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/"<<std::endl;

}

void checkGetMostViews()
{
    ofstream myfile;
    myfile.open("output.txt");
    map<int,map<int,int>> M;
    int k=rand()% 6;

        writeEmptyInit();
    for (int i=0;i<TEST_GETMOST_PARMATER;i++)
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
            if (M.find(courseID)!=M.end())
            {
                if (iter>M[courseID].size())
                {
                    writeWatch(INVALID,courseID,iter,time);
                    writeTimeView(INVALID,courseID,iter,0);
                }
                else
                {                
                    for (int i=0;i<iter;i++)
                    {
                        int classtoadd=rand()% iter;
                        writeWatch(SUC,courseID, classtoadd,time);
                        (M[courseID])[classtoadd]=(M[courseID])[classtoadd]+time;
                        writeTimeView(SUC,courseID,classtoadd,(M[courseID])[classtoadd]);
                    }
                }
            }
            else
            {
                if (M.find(courseID)==M.end())
                {
                    writeWatch(FAIL,courseID,iter,time);
                    writeTimeView(FAIL,courseID,iter,0);                    
                }

            }

        if (rand()%2==1)
        {
 
            map<int,map<int,vector<int>>> mymap;
            for (auto big_it =M.begin(); big_it!=M.end();big_it++) 
            {
                for (auto small_it=(big_it->second).begin(); small_it!=(big_it->second).end();small_it++)
                {
                    mymap[small_it->second][big_it->first].push_back(small_it->first);
                }
            }

            int tree_size=0;
            for ( auto it4=M.begin();it4!=M.end();it4++)
                {
                    tree_size+=it4->second.size();
                }
            writeallocate(i);
             if (rand()%2==1)
             {
                 if (rand()%2==1)
                 {
                    writegetMost(FAIL,1+(tree_size+rand()%5));
                 }
                 else
                 {
                    writegetMost(INVALID,-(rand()%5));
                 }
                 
             }
             writedeallocate();
            for (int i=1;i<=tree_size;i++)
            {
                writeallocate(i);
                writegetMost(SUC,i);
                writePrint(i);
                writedeallocate();                
                int cnt=0;
                
                myfile<< "Course\t|\tClass\n"<<std::endl;
                for(auto it1 =mymap.rbegin();it1!=mymap.rend();++it1)
                {
                    for(auto it2=(it1->second.begin());it2!=(it1->second).end();it2++)
                    {
                        sort(it2->second.begin(),it2->second.end());
                        for(auto it3=(it2->second.begin());it3!=(it2->second).end();it3++)
                        {
                            if (cnt==i)
                            {
                                break;
                            }
                            myfile<<to_string(it2->first)+"\t|\t"+to_string(*it3)+"\n"<<std::endl;
                            cnt++;
                        }
                        if (cnt==i)
                        {
                            break;
                        }
                    }
                    if (cnt==i)
                    {
                        break;
                    }
                }
                myfile<<"--End of most viewed classes--\n"<<std::endl;
           }
        }    
    }
    myfile.flush();
    myfile.close();
}
 
int main()
{
    srand(time(0));
    std::cout<<"#include \"CoursesManager.h\""<<std::endl;
    std::cout<<"#include \"util.h\""<<std::endl;
    std::cout<<"int main()"<<std::endl;
    std::cout<<"{"<<std::endl;
    std::cout<<"int* timeviewed=new int;"<<std::endl;
    std::cout<<"int* classes;"<<std::endl;
    std::cout<<"int* courses;"<<std::endl;
    std::cout<<"ofstream myfile;"<<std::endl;
    std::cout<<"myfile.open(\"myoutput.txt\");"<<std::endl;
    CheckAddRemove();
    CheckWatchClass();
    checkGetMostViews();
    std::cout<<"delete timeviewed;"<<std::endl;
    std::cout<<"myfile.flush();"<<std::endl;
    std::cout<<"myfile.close();"<<std::endl;
    std::cout<<"}"<<std::endl;

}