#include <iostream>
#include<fstream>
#include<conio.h>
int main()
{
    std::ifstream fin;
    fin.open("ben_stokes.txt",std::ios::in);
    char ch;
    std::cout<<fin.fail();
    std::cout<<fin.is_open();
    getch();

    while(!fin.eof())
    {
        fin>>ch;
        std::cout<<ch;
    }
    fin.close();
    return 0;
}
