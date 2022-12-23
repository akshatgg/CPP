#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"enter 3 nos";
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
        cout<<"smallest no is"<<a;
    }
    else if(b<c && b<a)
    {
        cout<<"smallest no is"<<b;
    }
    else
    {
        cout<<"smallest no is"<<c;
    }
    return 0;
}
