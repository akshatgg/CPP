#include<iostream>
using namespace std;
int main()
{
    int n=937,Y;
    while(n!=0)
    {
        Y=n%10;
        n=n/10;
        cout<<Y<<endl;

    }
    return 0;
}