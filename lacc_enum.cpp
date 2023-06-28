#include <iostream>
using namespace std;
class A
{
public:
    enum Enum{one,two,three};
    struct node{
        int a;
        double b;
    };
};
int main()
{
    int a=A::two;
    cout<<a<<endl;
    cout<<sizeof (A) << endl;
    cout<<"hello"<<endl;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(A::node)<<endl;
    A::node x;
    x.b=1.111;
    x.a=10;
    cout<<sizeof(x)<<endl;
    return 0;
}