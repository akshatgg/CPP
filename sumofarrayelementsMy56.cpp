#include<iostream>
using namespace std;
int main()
{
    int A[]={4,7,2,8,3};
    int sum=0,i=0;
    while(i<5)
    {
        sum=sum+A[i];
        i++;
    }
    cout<<sum<<endl;
    return 0;
}