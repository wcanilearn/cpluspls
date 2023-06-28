#include <iostream>
using namespace std;
class A
{
public:
    A():a(10)
    {
        b=100;
        // a=10;
    }
    void fun()
    {

    }
    void fun1() const
    {

    }
    static fun2()
    {

    }
    const int a;//常量数据成员必须使用初始化列表进行初始化
    int b;
    static int c;
};
int main()
{
    const A a;
    return 0;
}