#include<iostream>
using namespace std;
int main()
{
    int i,n=13,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count ++;
        }
    }
    if(count==2)
    {
        cout<<"prime no";
    }
    else if(count!=2)
    {
        cout<<"not a prime no";
    }
    return 0;
}