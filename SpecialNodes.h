#ifndef SPECIAL_NODES_H_
#define SPECIAL_NODES_H_

#include <iostream>
#include "AVLtree/AVLtree.h"

class TripletKey
{
    private:
    int time;
    int course_id;
    int class_num;

    public:
    TripletKey(int time=0,int courseid = 0,int classnum=0):course_id(courseid),time(time),class_num(class_num){};
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

bool TripletKey::operator>( const TripletKey y) const
{
    if (this->time > y.time)
    {
        return true;
    }
    else if (this->time == y.time && this->course_id>y.course_id)
    {
        return true;
    }
    else if  (this->time == y.time && this->course_id == y.course_id 
    && this->class_num > y.class_num)
    {
        return true;
    }
    return false;
}
bool TripletKey::operator==(const TripletKey y) const
{
    return (this->course_id == y.course_id && this->time == y.time && this->class_num == y.class_num);
}


bool TripletKey::operator<(const TripletKey y) const
{
    return !( *this == y || *this > y);
}

#endif