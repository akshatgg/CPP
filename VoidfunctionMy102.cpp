#include<iostream>
using namespace std;
int add (int a,int b)
{
   int c;
   c=a+b;
   return c;
}
int add (int a, int b,int w)
{
    int z;
    z=a+b+w;
    return z; 
}
float add (float x,float y)
{
    float p;
    p=x+y;
    return p;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    cout<<add(a,b)<<endl;
    int w,z;
    cin>>w;
    cout<<add(a,b,w)<<endl;
    float x,y,p;
    cin>>x>>y;
    cout<<add(x,y)<<endl;

    return 0;
}

