#include <iostream>
using namespace std;

struct S
{
    int a;
}__attribute__((aligned(8)));//aligned用来修改字节对齐方式

struct AA 
{
    int a;
    char b;
};

struct AA_packed
{
    int a;
    char b;
}__attribute__((__packed__));//在某些编译器上，是非紧凑模式，所以a,b占2个字节对齐单位。使用packed就可以将其变成紧凑模式。2个变量的内存紧挨在一起，占用更少的内存。

// 4、section

//         提到section，就得说RO RI ZI了，在ARM编译器编译之后，代码被划分为不同的段，RO Section(ReadOnly)中存放代码段和常量，RW Section(ReadWrite)中存放可读写静态变量和全局变量，ZI Section(ZeroInit)是存放在RW段中初始化为0的变量。
//         于是本文的大体意思就清晰了，__attribute__((section("section_name")))，其作用是将作用的函数或数据放入指定名为"section_name"对应的段中。



//  使用visibility("hidden")参数修饰的函数在编译成动态库时不可以被其他函数调用
int main()
{
    cout<<sizeof(S)<<endl;
    cout<<sizeof(AA)<<endl;
    cout<<sizeof(AA_packed)<<endl;
    return 0;
}