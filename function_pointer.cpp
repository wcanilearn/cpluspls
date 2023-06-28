#include <iostream>
using namespace std;

bool move(int type)
{
    cout<<"move"<<endl;
    return false;
}

bool Interact(int type)
{
    cout<<"Interact"<<endl;
    return false;
}

int main()
{

    bool (*p[2])(int)={move,Interact};
    // p[0]=move;
    // p[1]=Interact;
    p[0](10);
    p[1](20);
    return 0;
}