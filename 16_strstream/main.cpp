#include <iostream>
#include<strstream>
#include<string>

int main()
{
    char ch='z';
    int i=34;
    float a=22.2;
    char str2[]={'a','b'};
    char str[]="Rohana I want to spend quality time with you\n";

    std::ostrstream sout,sout2; // to insert characters in stringstream

    sout<<"Rohana you are gorgeous ";
    sout<<ch<<" ";
    sout<<i<<" ";
    sout<<a;

    std::cout<<sout.str()<<"a\n";

    sout2<<str2;
    std::cout<<sout2.str();
    return 0;
}
