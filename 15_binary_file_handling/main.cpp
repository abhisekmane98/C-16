#include <iostream>
#include <fstream>
struct emp
        {
            char name[20];
            int age;
        };
int main()
{
    const emp e1={"Abhishek", 22};
    emp e2;

    std::ofstream fout;
    fout.open("vicky.dat", std::ios::out | std::ios::binary);
    if(!fout.is_open())
    {
        exit(1);
    }
    fout.write(reinterpret_cast<char*>(&e1),24);
    fout.close();

    std::ifstream fin;
    fin.open("vicky.dat", std::ios::in | std::ios::binary);
    if(!fin.is_open())
    {
        exit(2);
    }
    fin.read(reinterpret_cast<char*>(&e2),24);

    std::cout<<e2.name<<" "<<e2.age<<"\n";

    return 0;
}
