#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define N int a;\ 
    int b;

struct test {
    N
};

int main()
{
    test t;
    t.a = 1;
    t.b = 3;
    std::cout << t.a << t.b << std::endl;
    // int n=N;
    // cout<<N<<endl;
    return 0;
}