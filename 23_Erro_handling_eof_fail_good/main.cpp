#include <iostream>
#include<fstream>

int main()
{
    std::ofstream fout;
    fout.open("vicky.txt", std::ios::out | std::ios::in);
    std::cout<<fout.fail()<<"\n";
    fout.clear()<<"\n";
    return 0;
}
