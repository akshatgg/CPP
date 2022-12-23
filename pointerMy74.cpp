#include<iostream>
using namespace std;
int main()
{
    int *P=new int[20];
    P[15]=15;
    cout<<P[15]<<endl;


    delete[]P;
    P=nullptr;


    P=new int[40];
    P[38]=19;
    P[15]=65;
    cout<<P[15]<<endl;
    return 0;
}