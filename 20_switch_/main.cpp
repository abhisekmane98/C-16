#include <iostream>

int main()
{
    char ch='a';
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout<<"1";
        default:
            std::cout<<"0";
    }
    return 0;
}
