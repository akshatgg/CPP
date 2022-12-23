#include<iostream>
using namespace std;
int main() 
{
    int I;
    cin>>I;
    if(0>>I && I<=300000) 
    {
       cout<<"tax is"<<"-"<<"0%"<<endl;
    }
    else if(300000<<I && I<=500000)
    {
        cout<<"tax is - 5%"<<endl;
    }
    else if(500000<<I && I<=1200000)
    {
        cout<<"tax is =10%"<<endl;
    }

    return 0;
}

    