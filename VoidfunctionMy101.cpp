#include<iostream>
using namespace std;
 void maxima(int a,int b,int c)
{
    if(a>b && a>c)
    {
    cout<<a<<endl;
    }
    // return a;
    else if (b>a && b>c)
    {
    cout<<b<<endl;
    }
    // return b;
    else{
        cout<<c<<endl;
    } 
    
    // return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    maxima(a,b,c); 

    return 0;
}