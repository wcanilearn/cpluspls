#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    int c;
};
int main()
{
    cout<<sizeof(A)<<endl;
    A a;
    cout<<&a<<" "<<&a.a<<endl;

    A *p = new A;
    cout<<p<<" "<<&p->a<<" "<<&p->b<<endl;
    cout<< (p+1) <<endl;
    return 0;
}