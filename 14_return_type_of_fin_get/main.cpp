#include <iostream>
#include <fstream>
int main()
{
    char ch;
    std::ifstream fin;
    fin.open("vicky.txt",std::ios::in);

    std::cout<<bool(fin.get(ch));
    return 0;
}