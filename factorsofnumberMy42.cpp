#include<iostream>
using namespace std;
int main()
{
    int n=8,i=0;
    while(i<=n)
    {
       i++;
        if(n%i==0)
        {
        cout<<"factor is"<<i<<endl;
        }
       
    }
    return 0;
}