
#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "SortedTree.h"

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

bool addClassView()
{
    SortedTree tree;
    ASSERT_TEST(tree.getSize()==0);
    tree.addClassView(5,5,5);
    ASSERT_TEST(tree.getSize()==1);
    tree.addClassView(6,5,5);
    ASSERT_TEST(tree.getSize()==2);
    tree.addClassView(7,5,5);
    tree.addClassView(8,5,0);
    tree.addClassView(51231231,5123123123,5123123123123);
    ASSERT_TEST(tree.getSize()==5);
    return true;
}

bool removeClass()
{
    SortedTree tree;
    tree.addClassView(1,1,1);
    tree.addClassView(2,2,2);
    tree.addClassView(3,3,3);
    ASSERT_TEST(tree.getSize()==3);
    tree.removeClass(1,1,1);
    ASSERT_TEST(tree.getSize()==2);
    tree.removeClass(2,2,2);
    ASSERT_TEST(tree.getSize()==1);
    tree.removeClass(3,3,3);
    ASSERT_TEST(tree.getSize()==0);
    return true;
}
bool topKtoArray()
{
    SortedTree tree1;
    int array_size=3;
    Array<TripletKey> array1(array_size);//sort by time
    for (int i=0;i<array_size;i++)
    {
        tree1.addClassView(i,i,i);
    }

    tree1.topKtoArray(array1,3,0);

    for (int i=0;i<array_size;i++)
    {
        ASSERT_TEST(array1[i].getCourseId()==array_size-1-i);
        ASSERT_TEST(array1[i].getClassNum()==array_size-1-i);
        ASSERT_TEST(array1[i].getTime()==array_size-1-i);
    }

    SortedTree tree2;
    Array<TripletKey> array2(array_size);//sort by courseID
    for (int i=0;i<array_size;i++)
    {
        tree2.addClassView(i,i,2);
    }

    tree2.topKtoArray(array2,3,0);

    for (int i=0;i<array_size;i++)
    {
        ASSERT_TEST(array2[i].getCourseId()==i);
        ASSERT_TEST(array2[i].getClassNum()==i);
        ASSERT_TEST(array2[i].getTime()==2);
    }

    SortedTree tree3;
    Array<TripletKey> array3(array_size);//sort by classNUM
    for (int i=0;i<array_size;i++)
    {
        tree3.addClassView(2,i,2);
    }

    tree3.topKtoArray(array3,3,0);

    for (int i=0;i<array_size;i++)
    {
        ASSERT_TEST(array3[i].getCourseId()==2);
        ASSERT_TEST(array3[i].getClassNum()==i);
        ASSERT_TEST(array3[i].getTime()==2);
    }
    return true;
}
int main(){

    std::map<std::string, std::function<bool()>> tests;
    ADD_TEST(addClassView);    
    ADD_TEST(removeClass);
    ADD_TEST(topKtoArray);
    
    int passed = 0;
    for (std::pair<std::string, std::function<bool()>> element : tests)
    {
        passed += run_test(element.second, "Running " + element.first);
    }

    cout<<"Passed "<<passed<<" out of "<<tests.size()<<" tests."<<endl;

    return 0;
}
