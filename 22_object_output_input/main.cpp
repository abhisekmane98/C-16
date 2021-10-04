#include <iostream>
struct complex
{
    private:
        float r,i;
    public:
        complex()
        {
            r=0;
            i=0;
        }
        complex(float a, float b )
        {
            r=a;
            i=b;
        }
        friend std::ostream& operator<<(std::ostream &s, complex &c)
        {
            s<<"("<<c.r<<","<<c.i<<")\n";
            return s;
        }
        friend std::istream& operator>>(std::istream &s, complex &c)
        {
            s>>c.r>>c.i;
            return s;
        }

};
int main()
{
    complex c1(2,4),c2;
    std::cout<<c1; // operator<<(cout, c1);
    std::cin>>c2;
    std::cout<<c2;
    return 0;
}
