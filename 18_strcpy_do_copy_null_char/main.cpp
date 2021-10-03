#include <iostream>
#include<cstring>
int main()
{
    char ch[]={'a','b'};
    char ch2[20];
    strcpy(ch2,ch);
    std::cout<<ch2<<"\n"<<strlen(ch2);

    return 0;
}
