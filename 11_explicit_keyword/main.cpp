#include "class_11.h"
#include <iostream>
void fun(A);
int main()
{
    // fun(3);
    A a(4);
    return 0;
}
void fun(A a)
{
    int i=a.getx();
    std::cout<<i;
}
