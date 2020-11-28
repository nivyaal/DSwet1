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

void SortedTree::topKtoArray(Array<TripletKey>& array,int k,int starting_index) const
{

    mega_tree.topKElementsToArray(k,array,starting_index);
}

int SortedTree::getSize() const
{
    return mega_tree.getTreeSize();
}