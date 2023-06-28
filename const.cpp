#include <iostream>
using namespace std;

void fun(int a)
{
    cout<<a<<endl;
}


void fun(int &a)
{
    a=100;
    cout<<a<<endl;
}

void fun(const int &a)
{
    cout<<a<<endl;
}


int main()
{
    const int a=10;
    // fun(1);
    // fun(a);
    return 0;
}