#include <iostream>
#include <fstream>
int main()
{
    char str[]="sing is king";

    std::ofstream fout;
    fout.open("Del_styne.txt",std::ios::out);

    fout<<str;

    fout.close();
    return 0;
}
