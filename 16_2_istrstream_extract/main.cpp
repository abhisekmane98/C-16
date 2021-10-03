#include <iostream>
#include<strstream>
int main()
{
    char str[]="Rohana 15 22.23 mylove";
    std::istrstream sin(str);

    char str2[20];
    int a;
    float b;
    char str3[20];

    sin>>str2>>a>>b>>str3;

    std::cout<<str2<<a<<b<<str3;

    return 0;
}
