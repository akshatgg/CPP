#include<iostream>
using namespace std;
int main()
{
    int n=678,Y,sum=0;
    while(n!=0)
    {
        Y=n%10;
        n=n/10;
        sum=sum+Y;
    }
    cout<<sum<<endl;
    return 0;
}