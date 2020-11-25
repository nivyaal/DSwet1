#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "CoursesTree.h"

using std::cout;
using std::endl;
using std::string;
//contain course
//erase course
//watchClass
//getTImeOfClass
//getNumOf


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
bool insert()
{
    CoursesTree tree;
    tree.insertCourse(5,5); 
    tree.insertCourse(4,6);
    tree.insertCourse(10,10);
    return true;
}

bool containCourse()
{
    CoursesTree tree;
    tree.insertCourse(5,5);
    tree.insertCourse(10,5);
    tree.insertCourse(20,5);
    ASSERT_TEST(tree.containCourse(5));
    ASSERT_TEST(tree.containCourse(10));
    ASSERT_TEST(tree.containCourse(20));
    ASSERT_TEST(!tree.containCourse(6));
    tree.eraseCourse(5);
    ASSERT_TEST(!tree.containCourse(5));
    return true;
}

bool eraseCourse()
{
    CoursesTree tree;
    tree.insertCourse(5,5);
    tree.insertCourse(10,5);
    tree.insertCourse(20,5);
    tree.eraseCourse(5);
    tree.eraseCourse(10);
    tree.eraseCourse(20);
    ASSERT_TEST(tree.containCourse(5));
    ASSERT_TEST(tree.containCourse(10));
    ASSERT_TEST(tree.containCourse(20));
    return true;
}

bool watchClass()
{
    CoursesTree tree;
    tree.insertCourse(5,5);
    tree.insertCourse(2,5);
    ASSERT_TEST(tree.getTimeOfClass(5,3)==0);
    tree.watchClass(5,3,10);
    ASSERT_TEST(tree.getTimeOfClass(5,3)==10);
    ASSERT_TEST(tree.getNumOfClasses(5)==10);
    return true;
}

int main(){

    std::map<std::string, std::function<bool()>> tests;
    ADD_TEST(insert);    
    ADD_TEST(containCourse);
    ADD_TEST(eraseCourse);
    ADD_TEST(watchClass);
    
    int passed = 0;
    for (std::pair<std::string, std::function<bool()>> element : tests)
    {
        passed += run_test(element.second, "Running " + element.first);
    }

    cout<<"Passed "<<passed<<" out of "<<tests.size()<<" tests."<<endl;

    return 0;
}
