#include <iostream>
using namespace std;

class A
{
public:
    static A* ins();
    int a=10;
    void fun() const //类中的成员函数使用const修饰只能确保不能修改this指针指向的成员变量，但是可以修改static修饰的成员变量(static修饰的成员变量不被this修饰)。
    {
        // test();
        b=10;
    }
    static int b;
// private:
    A() { //构造函数定义为private保证单例
        cout<<"A construct"<<endl;
    }

    ~A() { //析构函数定义为private保证只能在堆上new出实例
        cout<<"A destruct"<<endl;
    }
};
int A::b=100;  //静态成员变量不许类内声明，类外初始化，但是静态常量成员却可以在类内定义并初始化

A* A::ins()
{
    static A* p =new A;
    return p;
}

int main()
{ 
    // A::ins()->a=100;
    // int x = A::ins()->a;
    // cout<<A::ins()->a<<endl;
    // cout<<"sizeof A: "<<sizeof(A)<<endl;
    // A *a = new A;
    // A *b = new A;
    // a->a = 100;
    // b->a = 1000;
    A a;
    cout<<a.b<<endl;
    a.fun();
    cout<<a.b<<endl;
    return 0;
}