#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    int A[2][3]={{3,6,9},{2,5,9}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j];
        }
    cout<<endl;
    }
return 0;
}