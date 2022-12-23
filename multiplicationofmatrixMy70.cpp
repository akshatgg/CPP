#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],multi[10][10],r1,r2,c1,c2,i,j,k;

    cout<<"enter the number of rows and column for first matrix";
    cin>>r1>>c1;
    cout<<"enter the number of rows and column for second matrix";
    cin>>r2>>c2;

    cout<<"enter elements of matrix A :";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           cout<<"enter element A"<<i+1<<j+1<<":";
           cin>>A[i][j];
        }
           cout<<endl;
    }
    cout<<"enter element of matrix B :";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"enter element B"<<i+1<<j+1<<":";
            cin>>B[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            multi[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                multi[i][j]=A[i][k]*B[k][j];
            }
        }
        cout<<endl;
    }
    if(c1!=r2)
    {
        cout<<"multiplication is not valid";
        return 0;
    }
    cout<<"output matrix :"<<endl;
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<" "<<multi[i][j];
        }
    cout<<endl;
    }
    return 0;
}