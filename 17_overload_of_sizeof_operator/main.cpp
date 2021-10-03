#include <iostream>
struct emp
{
    int a;
    char ch[20];
};
int main()
{
    std::cout << sizeof(emp)<<"\n";
    std::cout << sizeof emp;
    return 0;
}
