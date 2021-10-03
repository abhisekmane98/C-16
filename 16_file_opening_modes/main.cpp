#include <iostream>
#include<fstream>
int main()
{
    char ch[]="I love you rohana.", ch2;

    std::fstream f;
    f.open("vicky.txt", std::ios::out | std::ios::in);
    if(!f.is_open())
    {
        exit(1);
    }
    f<<ch<<" I wanna kiss you on chick and expecting you to back kissed.";
    std::cout<<f.tellp()<<" "<<f.tellg()<<" "<<f.fail()<<"\n";
    f.seekg(4L);
    std::cout<<f.tellp()<<" "<<f.tellg()<<" "<<f.fail()<<"\n";
    while(f.get(ch2))
    {
        std::cout<<ch2;
    }
    std::cout<<"\n";
    std::cout<<f.tellp()<<" "<<f.tellg()<<" "<<f.fail()<<"\n";
    f.clear();
    std::cout<<f.tellp()<<" "<<f.tellg()<<" "<<f.fail()<<"\n";
    f.close();
    return 0;
}
