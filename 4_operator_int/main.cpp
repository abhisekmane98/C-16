#include <iostream>
#include "Class_4.h"
int main()
{
    string s1("bonaparte");
    s1.display();
    int k=s1.operator int();
    std::cout<<k;
    return 0;
}
