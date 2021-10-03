#include <iostream>
#include<fstream>
#include <conio.h>
int main()
{
    char ch=10;
    std::cout<<"a"<<ch<<"a";
    getch();
    std::ifstream fin;
    fin.open("vicky.txt", std::ios::in);

    while (fin.get(ch))
    {
        if(fin.fail())
        {
            std::cout<<"??";
            getch();
        }

        std::cout<<ch;
    }
    fin.close();
    return 0;
}
