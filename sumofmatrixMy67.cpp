#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{3,6,9},{2,4,8}};
    int B[2][3]={{5,7,4},{5,8,3}};
    int C[2][3]={{6,9,3},{4,7,3}};
    int D[2][3];
    int i=0;
    while(i<2)
    {
        int j=0;
        while(j<3)
        {
            D[i][j]=A[i][j]+B[i][j]+C[i][j];
        j++;
        }
    i++;
    }
    i=0;
    while(i<2)
    {
        int j=0;
        while(j<3)
        {
            cout<<D[i][j]<<" ";
        j++;
        }
    i++;
    cout<<endl;
    }
    return 0;
}