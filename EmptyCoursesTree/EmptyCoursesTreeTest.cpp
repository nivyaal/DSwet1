
#include "EmptyCoursesTree.h"
#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "../List/List.h"
#include <vector>
#include <algorithm>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;

#define ADD_TEST(x) tests[#x]=x;

#define ASSERT_TEST(x) if(!(x)){ \
 cout<<"Failed assertion at line "<<__LINE__<<" in "<<__func__<<endl;\
  return false; }

bool run_test(std::function<bool()> test, std::string test_name){
    if(!test()){
        cout<<test_name<<" - FAILED."<<endl;
        return false;
    }
    cout<<test_name<<" - PASSED."<<endl;
    return true;
}

int randomNumber () { return (std::rand()%800); }

bool emptyDs()
{
    EmptyCoursesTree data1;
    return true;
}

bool insertEraseTest()
{
    //inserting courses
        EmptyCoursesTree data2;
    	std::vector<int> vec(10);
		std::generate(vec.begin(), vec.end(), randomNumber);
        std::cout<<"courses number"<<std::endl;
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout<<*it<<", ";
        }
        cout<<endl;
        for (int i=1; i<11; i++)
        {
            data2.insertCourse(vec[i-1],i);
        }
        ASSERT_TEST(data2.getClassesNum() == 55);
        ASSERT_TEST(data2.getCoursesNum() == 10);
    //erase courses
        data2.eraseCourse(vec[2]);
        data2.eraseCourse(vec[6]);
        data2.eraseCourse(vec[8]);

        ASSERT_TEST(data2.getClassesNum() == 36);
        ASSERT_TEST(data2.getCoursesNum() == 7);

        data2.insertCourse(vec[2], 5);
        ASSERT_TEST(data2.getClassesNum() == 41);
        ASSERT_TEST(data2.getCoursesNum() == 8);

        return true;
}

void printArray(Array<TripletKey>& arr)
{
    cout<<"index: "<<endl;
    for(int i=0 ; i<arr.getSize(); i++)
    {
        cout<< i <<", ";
    }
    cout<<endl;
    cout<< "course"<< endl;
    for (int i=0; i<arr.getSize(); i++)
    {
        std::cout << arr[i].getCourseId() << ", ";
    }
    cout<<endl;
    cout<< "class"<< endl;
    for (int i=0; i<arr.getSize(); i++)
    {
        std::cout << arr[i].getClassNum() << ", ";
    }
    cout<<endl;
}


bool watchClassToArray()
{
    EmptyCoursesTree data2;
    std::vector<int> vec(8);
    cout<<endl;
    for (int i=1; i<=8; i++)
    {
        vec[i-1]=i; 
        data2.insertCourse(vec[i-1],i);
    }
    ASSERT_TEST(data2.getClassesNum() == 36);
    ASSERT_TEST(data2.getCoursesNum() == 8);
    Array<TripletKey> arr(45);
    data2.toArrayKElements(36, arr, 0);
    printArray(arr);
    data2.toArrayKElements(9, arr, 36);
    printArray(arr);
    data2.watchClass(1,0, 5);
    ASSERT_TEST(data2.getClassesNum() == 35);
    ASSERT_TEST(data2.getCoursesNum() == 8);   
    data2.toArrayKElements(35, arr, 9);
    printArray(arr);


    return true;
}





int main(){

    std::map<std::string, std::function<bool()>> tests;
    ADD_TEST(emptyDs);    
    ADD_TEST(insertEraseTest);
    ADD_TEST(watchClassToArray);
    int passed = 0;
    for (std::pair<std::string, std::function<bool()>> element : tests)
    {
        passed += run_test(element.second, "Running " + element.first);
    }

    cout<<"Passed "<<passed<<" out of "<<tests.size()<<" tests."<<endl;

    return 0;
}
