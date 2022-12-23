#include<iostream>
using namespace std;
int main()
{
    int i=0,A[10]={6,8,13,17,20,22,25,28,30,35},mid,l=0,h=9,key=29;
    while(i<10)
    {
    mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"found at"<<mid;
            break;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else if(key>A[mid])
        {
            l=mid+1;
        }
        i++;
        
    }
       if(A[mid]!=key)
      {
        cout<<"not found";
      }
    return 0;
}