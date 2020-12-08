cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()


#add_executable(main main1.cpp library.cpp CoursesManager.cpp SortedTree.cpp CoursesTree.cpp SpecialNodes.cpp EmptyCoursesTree.cpp)
add_executable(main AVLtree/AVLtest2.cpp )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
