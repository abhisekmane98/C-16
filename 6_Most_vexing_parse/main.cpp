#include <iostream>

struct sometype
        {

            int data;

            sometype()
            {
                data=0;
                std::cout<<"Ctor\n";
            }
            sometype(int k)
            {
                std::cout<<"1-Arg Ctor\n";
                data=k;
            }
            ~sometype()
            {
                std::cout<<"Dctor\n";
            }
        };
int main()
{
    sometype A1(2);
    std::cout<<A1.data<<"\n";
    return 0;
}
