#ifndef LIST_H_
#define LIST_H_

#include <iostream>
template<class T>
class ListNode
{
    private:
    public:
    T value;
    ListNode<T>* next; // bigger
    ListNode<T>* prev; //smaller
    ListNode():value(0),next(nullptr),prev(nullptr){};
    ListNode(T val):value(val),next(nullptr),prev(nullptr){};
};

template<class T>
class List
{

    private:    
    protected:
    int size;
    ListNode<T>* head; // smallest val
    ListNode<T>* tail; // biggest val
    void deleteCurr(ListNode<T>* curr_ListNode);
    void insertStart(const T& val,ListNode<T>* head);
    void remove(const T& val,ListNode<T>* head);
    void emptyList(ListNode<T>* curr);

    public:
    List():head(new ListNode<T>()),tail(new ListNode<T>()),size(0){head->next=tail;tail->prev=head;};
    ~List(){emptyList(head->next);delete head;delete tail;};
    int getSize();
    void insertStart(const T& val);
    void remove(const T& val);
    void remove(ListNode<T>* curr);
    ListNode<T>* getHead(){return head->next;};
    void ListToArrayKelements(int index,int fill_this_many,T* array);
};

template <class T>
void List<T>::remove(ListNode<T>* curr)
{
    if (curr==nullptr)
    {
        return;
    }
    size--;
    ListNode<T>* temp =curr;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete curr;
}

template <class T>
int List<T>::getSize()
{
    return size;
}

template <class T>
void List<T>::remove(const T& val)
{
    remove(val,head);
    if (size>0)
    {
        size --;
    }
}

template < class T>
void List<T>::remove(const T& val, ListNode<T>* head)
{
    if (head->next==tail)
    {
        return; // throw value doesnt exist
    }
    if((head->next)->value == val)
    {
        ListNode<T>* new_next = (head->next)->next;
        delete head->next;
        head->next = new_next;
        head->next->prev=head;
        return;
    }
    remove(val, head->next);
}

template < class T>
void List<T>::emptyList(ListNode<T>* curr)
{
    if (curr->next == tail)
    {
        return;
    }
    emptyList(curr->next);
    remove((curr->next)->value, curr);
}

template < class T>
void List<T>::insertStart(const T& val)
{
    insertStart(val,head);
    size++;
}

template < class T>
void List<T>::insertStart(const T& val,ListNode<T>* head)
{
    ListNode<T>* temp=head->next;
    ListNode<T>* new_ListNode=new ListNode<T>(val);
    head->next=new_ListNode;
    new_ListNode->next=temp;
    temp->prev=new_ListNode;
    new_ListNode->prev=head;
}

template<class T>
void List<T>::ListToArrayKelements(int index,int fill_this_many,T* array)
{
    ListNode<T>* temp=head->next;
    if (this->getSize()==0)
    {
        return;
    }
    for (int i=0;i<fill_this_many;i++)
    {
        array[index+i] = temp->value;
        temp=temp->next;
    }
}
#endif