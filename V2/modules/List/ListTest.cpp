#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "List.h"
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

int randomNumber () { return (std::rand()%100); }

bool emptyList()
{
    List<int> list1;
    list1.remove(list1.getHead());
    list1.remove(nullptr);
    list1.remove(2);
    return true;
}


bool oneNode()
{
    List<char> list1;
    list1.insertStart('A');
    std::cout<<list1.getHead()->value<<std::endl;
    list1.remove(list1.getHead());
    list1.remove('A');
    return true;
}


bool loop()
{
    List<int> list1;
	for (int i=1; i<7; i++)
	{
        std::cout<<"vector size:" << i << std::endl;
        //creating new list
        std::cout<<"creating the list compare with the vec"<<std::endl;
		std::vector<int> vec(i);
		std::generate(vec.begin(), vec.end(), randomNumber);
        std::cout<<"inseting order"<<std::endl;
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout<<*it<<", ";
        }
        std::cout<<std::endl << "List"<< std::endl;
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        {
            list1.insertStart(*it);
            int curr = list1.getHead()->value;
            std::cout << curr <<", ";
        }
        std::cout << std::endl;
        //insert the list to a array from start to all sizes;
        std::cout<< "differnt ves of array" <<std::endl;
        for (int j=1; j<=i; j++)
        {
            Array<int> arr(j);
            list1.ListToArrayKelements(0,j,arr);
            for(int k=0; k <  j; k++)
            {
                std::cout<<arr[k]<<", ";
            }
            std::cout<<std::endl;
        }

        //insert the list to a array from different indexes to end;
        Array<int> arr(i);
        for (int j=0; j<i; j++)
        {
            list1.ListToArrayKelements(j,i-j,arr);
            cout<<"starting index: "<< j <<endl;
            for(int k=0; k <  i; k++)
            {
                std::cout<<arr[k]<<", ";
            }
            std::cout<<std::endl;
        }
        /*
        std::cout<< "removing elements" <<std::endl;
        // remove randomely
        std::random_shuffle(vec.begin(), vec.end());
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout<<*it<<", ";
        }*/
        std::cout << "List"<< std::endl;
        for (int k=0; k<i ; k++)
        {
            int num= i-k-1;
            cout<<"will be removed: " << list1.getHead()->value<<endl;
            list1.remove(list1.getHead());
            Array<int> arr(i-k-1);
            list1.ListToArrayKelements(0,num,arr);
            for(int k=0; k <  num ; k++)
            {
                std::cout<<arr[k]<<", ";
            }
            std::cout<<std::endl;
        }
        
	}
    return true;
}

//bool removeCuur()











int main(){

    std::map<std::string, std::function<bool()>> tests;
    ADD_TEST(emptyList);    
    ADD_TEST(oneNode);
    ADD_TEST(loop)
    int passed = 0;
    for (std::pair<std::string, std::function<bool()>> element : tests)
    {
        passed += run_test(element.second, "Running " + element.first);
    }

    cout<<"Passed "<<passed<<" out of "<<tests.size()<<" tests."<<endl;

    return 0;
}
