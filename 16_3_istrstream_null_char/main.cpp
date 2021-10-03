#include <iostream>
#include<strstream>

int main()
{
    int i=34;
    char str2[]={'a','b'};
    std::ostrstream sout,sout2;

    sout<<i;
    std::cout<<sout.str()<<"a\na";


    sout2<<str2;
    std::cout<<sout2.str();
    return 0;
}
