#include<iostream>
using namespace std;
int main()
{
    int A[5]={5,8,2,8,6};
    float sum=0,average;
    for(int i=0;i<5;i++ )
    {
        sum+=A[i];
    }
     average=sum/5;
     cout<<"average is"<<average;
return 0;
}