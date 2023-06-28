#include <iostream>

int& func()
{
    static int a=10;
    return a;
}

int main()
{
    func()++;
    func()++;
    std::cout<< func() <<std::endl;
    func()--;
    std::cout<< func() <<std::endl;
    return 0;
}