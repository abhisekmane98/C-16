//
// Created by Abhishek_old on 27-08-2021.
//

#include "class_11.h"
#include <iostream>
A::A(int a):x(a)
{
    std::cout<<"Ctor A\n";
}

int A::getx()
{
    return x;
}