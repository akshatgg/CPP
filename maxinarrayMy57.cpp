#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int A[]={4,8,6,9,5,2,7},i=0;
    int max=INT_MIN;
    while(i<7)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        i++;
    }
    cout<<max<<endl;
    return 0;
}