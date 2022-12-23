#include<iostream>
using namespace std;
int main()
{
    int n=153,Y,sum=0,m;
    m=n;
    while(n>0)
    {
        Y=n%10;
        n=n/10;
        sum=sum+Y*Y*Y;
    }
    if(sum==m)
    {
        cout<<m<<"is a armstrong number";
    }
    else
    {
        cout<<m<<"is not a armstrong number";
    }
    return 0;
}