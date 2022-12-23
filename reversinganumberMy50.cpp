#include<iostream>
using namespace std;
int main()
{
    int n=153,r,rev=0,Y;
    while(n!=0)
    {
        Y=n%10;
        n=n/10;
        rev=rev*10+Y;
    }
    cout<<"reverse number is"<<rev;

    return 0;
}