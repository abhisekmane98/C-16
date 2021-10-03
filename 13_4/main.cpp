#include <iostream>
#include<fstream>
#include <conio.h>
int main()
{
    char ch;
    std::ifstream fin;
    fin.open("vicky.txt", std::ios::in);
    if(!fin.is_open())
    {
        exit(1);
    }

    while (!fin.eof())
    {
        ch=fin.get();
        std::cout<<ch;
    }
    std::cout<<"a";
    fin.close();
    return 0;
}
