#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter n";
    cin>>n;
    for(i=1;n>=i;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
      
    }
    cout<<"sum of factors is"<<sum<<endl;

    return 0;
}