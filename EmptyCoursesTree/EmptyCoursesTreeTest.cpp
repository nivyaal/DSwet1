
#include "EmptyCoursesTree/EmptyCoursesTree.h"

int main()
{
 EmptyCoursesTree niv;
 //ctor
 niv.insertCourse(1,5);
 niv.insertCourse(2,10);
 niv.insertCourse(3,100);
 
 
//watchclass
 niv.watchClass(1,0,3);
 niv.watchClass(1,2,5);
 niv.watchClass(1,3,5);
 niv.watchClass(1,4,5);//CLASS 0 Left for course 1
 for (int i=0;i<5;i++)
{
    niv.watchClass(2,i,1);
}//class 50-100 left for course 3
for (int i=0;i<50;i++)
{
    niv.watchClass(3,i,1);
}//class 50-100 left for course 3

 //topeKelementsToarray
 TripletKey array1[1000];
niv.toArrayKElements(30,array1);
niv.toArrayKElements(55,array1);
 //erase
 niv.eraseCourse(2);
 niv.eraseCourse(2);
TripletKey array2[1000];
niv.toArrayKElements(30,array2);
 niv.eraseCourse(3);
 niv.eraseCourse(1);

 
 
 
}