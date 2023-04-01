#include<iostream>
using namespace std;
int main()
{
    int a[100],b[100];
    int i,j;
    int Alice=0,Bob=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<3;j++)
    {
        cin>>b[j];
    }
    for(int k=0;k<3;k++)
    {
        
        if(a[k]>b[k])
        {
          Alice++;
        }
       else if(a[k]<b[k])
        {
            Bob++;
        }
    }
    cout<<Alice<<" "<<Bob;
    
    return 0;
}