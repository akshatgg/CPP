#include<iostream>
using namespace std;;
int main()
{
    int n=6,i=1,j;
    while(j<=60)
    {
        j=n*i;
        cout<< n <<"*"<< i <<"="<<j<<endl;
        i++;
    }
    return 0;
}