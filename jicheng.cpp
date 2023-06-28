#include <iostream>
using namespace std;

class D
{
public:
    D()
    {
        cout<<"D"<<endl;
    }
    int x=100;
    int y=111;
    static int ss;
};
int D::ss=100;

class A:virtual public D
{
public:
    A()
    {
        cout<<"A"<<endl;
    }
};

class B:virtual public D
{
public:
    B()
    {
        cout<<"B"<<endl;
    }
};

class C:public B,public A
{
public:
    C()
    {
        cout<<"C"<<endl;
    }
};

int main()
{
    A a;
    B b;
    cout<<a.x<<" "<<b.x<<endl;
    C c;
    D d;
    a.ss=10;
    b.ss=2012;
    cout<<d.ss<<endl;
    return 0;
}