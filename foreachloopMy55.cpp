#include<iostream>
using namespace std;
int main()
{
    int A[]={2,5,7,3};
    for(int x:A)
    {
        cout<<++x<<endl;
    }
    return 0;
}