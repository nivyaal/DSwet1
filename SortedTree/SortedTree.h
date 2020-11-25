#ifndef SORTEDTREE_H_
#define SORTEDTREE_H_

#include "../AVLtree/AVLtree.h"
#include "../SpecialNodes.h"
#include "../Array/Array.h"

class SortedTree
{
    private:
    AVLtree<TripletKey,TripletKey> mega_tree;
    public:
    void removeClass(int course_id,int num_of_classes,int time);
    void addClassView(int course_id,int class_num,int time);
    void topKtoArray(Array<TripletKey>& array,int k,int starting_index)const;
    int getSize() const;
    
};

#endif