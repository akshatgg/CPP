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
    int n,num[100];
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }

    for (int i=1;i<=2*n;i++)
    {
        if(i<=n)
        { 
    
            cout<<num[i]<<" ";
        }
        else (i>n);
        {
            cout<<num[i-n]<<" ";
        }
    }
    return 0;
}