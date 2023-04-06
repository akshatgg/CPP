#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main()
{
    int n,sum=0,i,j,max=0,z=0;
    int A[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            
     cin>>A[j][i];
     sum+=A[j][i];
     
        }
     if(max<=sum)
     {
        max=sum;
        
      z++;        
        
        
     }
     else{

     }
        sum=0;
    }
    cout<<z<<endl;

    return 0;
}