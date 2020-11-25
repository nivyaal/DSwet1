#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "AVLtree.h"

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

bool emptyTree()
{
    List<int> list1;
    list1.removeCurr(get.head);
    list1.removeCurr(nullptr);
    list1.remove(2);
}

bool oneNode()
{
    List<char> list1;
    list1.insertStart('A');
    std::cout<<list1.g
}

bool loop()
{

}

bool removeCuur()









int main(){

    std::map<std::string, std::function<bool()>> tests;
    ADD_TEST(empty_tree);    
    ADD_TEST(oneNode);
    upTo20();
    int passed = 0;
    for (std::pair<std::string, std::function<bool()>> element : tests)
    {
        passed += run_test(element.second, "Running " + element.first);
    }

    cout<<"Passed "<<passed<<" out of "<<tests.size()<<" tests."<<endl;

    return 0;
}
