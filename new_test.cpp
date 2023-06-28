#include <iostream>

int main()
{
    double *p = new double[1000000000000];
    if( p ){
        std::cout<< "successful" <<std::endl;
    }
    return 0;
}