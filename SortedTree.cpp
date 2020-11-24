#include <iostream>
#include "SortedTree/SortedTree.h"

void SortedTree::removeClass(int course_id,int class_num,int time)
{

    mega_tree.erase(TripletKey(time,course_id,class_num)); 
}

void SortedTree::addClassView(int course_id,int class_num,int time)
{

    mega_tree.insert(TripletKey(time,course_id,class_num),TripletKey(time,course_id,class_num)); 
}

void SortedTree::topKtoArray(TripletKey* array,int k)
{

    mega_tree.topKElementsToArray(k,array);
}

int SortedTree::getSize()
{
    return mega_tree.getTreeSize();
}