#ifndef SPECIALNODES_H_
#define SPECIALNODES_H_

#include <iostream>
#include "AVLtree/AVLtree.h"

class TripletKey
{
    private:
    int time;
    int course_id;
    int class_num;

    public:
    TripletKey(int time=0,int courseid = 0,int classnum=0):course_id(courseid),time(time),class_num(classnum){};
    bool operator>(const TripletKey y) const;
    bool operator<(const TripletKey y) const;
    bool operator==(const TripletKey y) const;
    int getCourseId(){return course_id;};
    int getClassNum(){return class_num;};
    int getTime(){return time;};
    void setCourseId(int new_id){course_id = new_id;};
    void setClassNum(int new_num){class_num = new_num;};
    void setTime(int new_time){time = new_time;};
    void addTime(int new_time){time += new_time;};
};

template<class U,class T>
class Pair
{
    public:
    U first;
    T second;
    Pair()=delete;
    Pair& operator=(const Pair& other){first=other.first;second=other.second;};
    Pair(const U& key,const T& value):first(key),second(value){};
};

#endif