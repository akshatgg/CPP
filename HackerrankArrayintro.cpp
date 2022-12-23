#include <iostream>
using namespace std;


int main() 
{
    int i,n;
    cin>>n; 
    int A[1000];
    for( i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int j=n-1;j>=0;j--)
    {
        cout<<A[j]<<" ";
    }
    
    
    return 0;
}