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
        void operator<<(complex &c)
        {
            std::cout<<"("<<c.r<<","<<c.i<<")\n";
            return s;
        }
        void operator>>(complex &c)
        {
            std::cout>>c.r>>c.i;
            return s;
        }

};

int main()
{
    complex c1(2,3);
    std::cout.operator<<(c1);
    return 0;
}
