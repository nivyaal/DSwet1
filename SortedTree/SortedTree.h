#ifndef SORTEDTREE_H_
#define SORTEDTREE_H_

#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"

class SortedTree
{
    private:
    AVLtree<TripletKey,TripletKey> mega_tree;
    public:
    void RemoveClass(int course_id,int num_of_classes,int time);
    void addClassView(int course_id,int class_num,int time);
    void topKtoArray(TripletKey* array,int k);
    int getSize(){return mega_tree.getTreeSize();};
    
};

#endif