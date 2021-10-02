#include <iostream>
struct X
        {
            X()
            {
                std::cout <<"Ctor-X\n";
            }
            ~X()
            {
                std::cout <<"Dctor-X\n";
            }
        };
struct Y
        {
                Y(const X &x)
                {
                    std::cout << "Ctor-Y\n";
                }
                void f()
                {
                    std::cout << "f\n";
                }
                ~Y()
                {
                    std::cout << "Dctor-Y\n";
                }
        };
int main()
{
 //       Y y(X x2);
          int a();
          a=3;
          std::cout<<a;

        return 0;
}
