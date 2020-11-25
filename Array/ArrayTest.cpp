#include "Array.h"
#include <iostream>

int main()
{
    Array<int> arr(5);
    arr[2]=4;
    std::cout<<arr[2]<<std::endl;
    int a=arr[2]+3;
    std::cout<<a<<std::endl;
}