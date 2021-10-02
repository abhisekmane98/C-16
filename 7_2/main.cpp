#include <iostream>

struct A
        {
            int a;
            A()
            {
                std::cout<<"Ctor-A\n";
            }
            ~A()
            {
                std::cout<<"Dctor-A\n";
            }

        };
int main()
{
    A{};
    return 0;
}
