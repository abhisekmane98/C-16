#include <iostream>
#include<fstream>

int main()
{
    std::ofstream fout;
    fout.open("vicky.txt", std::ios::out | std::ios::in);
    std::cout<<fout.fail()<<"\n";
    fout.clear();
    std::cout<<fout.fail()<<"\n";
    fout.clear(std::ios::badbit);
    std::cout<<fout.bad();
    return 0;
}

