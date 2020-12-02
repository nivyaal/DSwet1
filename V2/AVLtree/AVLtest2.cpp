#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "AVLtree.h"

using std::cout;
using std::endl;
using std::string;



void upTo20();
void treePermotation(AVLtree<int,int> &tree, int n, int N);

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
bool empty_tree()
{
    AVLtree<int,int> tree;
    ASSERT_TEST(tree.find(5)==nullptr);
    AVLtree<int,int>::printInOrder(tree.root);
    ASSERT_TEST(tree.getTreeSize()==0)
    return true;
}
bool oneNode()
{
    AVLtree<int,int> tree;
    tree.insert(5,5);
    AVLtree<int,int>::printInOrder(tree.root);
    ASSERT_TEST(tree.getTreeSize()==1)
    tree.find(5);
    tree.erase(5);
    return true;
}

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



void upTo20()
{
    for (int i =1 ; i< 6; i++)
    {
        AVLtree<int,int> tree;
        treePermotation(tree, 0, i);
    } 
}



void treePermotation(AVLtree<int,int>& tree, int n, int N)
{
    if (n == N)
    {
        tree.printInOrder(tree.root);
        std::cout<<std::endl;
        return;  
    }
    for (int i=0;i<N;i++)
    {
        if (tree.find(i))
        {
            continue;
        }
        tree.insert(i,i);
         treePermotation(tree, n+1, N);
        tree.erase(i);
    }
    return;
}


/*
int factorial(int n)
{
    int n_factorial = 1;
    for (int=1; i<n ; i++)
    {
        n_factorial *=i;
    }
    return n_factorial;
}
*/