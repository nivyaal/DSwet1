cmake_minimum_required(VERSION 3.0.0)
project(DSwet1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(DSwet1  SortedTree.cpp EmptyCoursesTree.cpp CoursesTree.cpp CoursesManager.cpp main.cpp )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
