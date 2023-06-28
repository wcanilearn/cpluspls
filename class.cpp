#include <iostream>

class A
{
public:
    A(int a,int b,int c=100)
    {
        a=a;
        b=b;
        c=c;
        std::cout<<"A construct"<<std::endl;
    }
    ~A()
    {
        std::cout<<"A destruct"<<std::endl;
    }
private:
    int a,b,c;
};

int main()
{
    // A a;
    // a.~A();
    A a{1,2};
    return 0;
}