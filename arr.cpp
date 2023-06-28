#include <iostream>
using namespace std;

int count(int *a)
{
    return sizeof(a);
}

int main()
{

    int arr[5] {2,2,3,4,5};
    // int len = *(&arr + 1) - *&arr; //5
    // std::cout<<len<<std::endl;
    // cout << "(&arr + 1): " << *(&arr + 1) << endl; //0x22fe34
    // cout << "*(&arr + 1): " << **(&arr + 1) << endl;//0x22fe34
    // cout << "*&arr: " << **&arr << endl; //0x22fe20
    // cout << "&arr: " << &arr << endl;  //0x22fe20
    // cout << "arr:  " << arr << endl;
    // cout << "arr+1:  " << arr+1 << endl;

    // cout<< sizeof(arr) <<endl;
    // cout<< count(arr)  <<endl;//数组作为形参传递时就会退化为指针

    // cout<< (&arr + 1) - &arr << endl;

    // cout<< (arr + 1) - arr <<endl;


    cout<< arr <<endl;
    cout<< &arr <<endl;

    return 0;
}