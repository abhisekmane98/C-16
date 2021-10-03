#include <iostream>

struct complex
        {
        private:
            int r,i;
        public:
            complex():r(0),i(0)
            {

            }
            complex(int r, int i):r(r),i(i)
            {

            }
            friend std::ostream& operator<<(std::ostream &s, complex &c)
            {
                s<<c.r<<" "<<c.i<<"\n";
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
    complex c1(3,2),c2(1,2),c3;
    std::cout<<c1<<c2;
    std::cin>>c3;
    std::cout<<c3;
    return 0;
}
