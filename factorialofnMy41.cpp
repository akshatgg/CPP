#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1,n;
    cout<<"enter value of n";
    cin>>n;
    while(i<=n)
    {
      j=i*j;
        cout<<i<<"*"<<j/i<<"="<<j<<endl;
       
        i++;
    }
    return 0;
}