//
// Created by Abhishek_old on 22-08-2021.
//

#include "Class_4.h"
#include<stdlib.h>
#include<iostream>
#include<cstring>

string::string(const char *p)
{
    strcpy(str,p);
}
string::operator int()
{
    return atoi(str);
}

void string::display()
{
    std::cout<<str<<"\n";
}