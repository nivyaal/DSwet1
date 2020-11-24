#include "CoursesTree/CoursesTree.h"
int main()
{ 
    CoursesTree courses_tree;
    //Check insert class
    courses_tree.insertCourse(5555,5);
    courses_tree.insertCourse(1,5);
    courses_tree.insertCourse(5,23);
    //check erase class
    courses_tree.eraseCourse(5);
    courses_tree.eraseCourse(5555);
    //check watchClass
    courses_tree.watchClass(1,2,10);
    courses_tree.watchClass(1,2,10);
    courses_tree.watchClass(1,4,20);
    /*Expected output
    */
    //check getTImeoFclass
    courses_tree.insertCourse(5555,5);
    std::cout<<courses_tree.getTimeOfClass(5555,4)<<std::endl;
    std::cout<<courses_tree.getTimeOfClass(1,2)<<std::endl;
    std::cout<<courses_tree.getTimeOfClass(1,4)<<std::endl;

}