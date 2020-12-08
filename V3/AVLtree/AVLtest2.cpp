#include <iostream>
#include <map>
#include <sstream>
#include <functional>
#include <cmath>
#include "AVLtree.h"

using std::cout;
using std::endl;
using std::string;


int main()
{
    AVLtree<int, int> tree;
    for (int i=0; i<15; i++)
    {
        tree.insert(i,i);
    }
    for(auto it=tree.begin(); it!= tree.end(); it++)
    {
        Pair<int, int>  curr= *it;;
    }



}






