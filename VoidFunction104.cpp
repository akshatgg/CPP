#include<iostream>
using namespace std;
int maximum(int a, int b,int c,int d)
{
     return a>b && a>c && a>d ? a:(b>a && b>c && b>d ? b:(c>a && c>b && c>d ?c:d) );
     
}
int add1(int a1=0, int b1=0, int c1=0)
{
    return a1+b1+c1;
}
int add3(int x,int y,int z=0)
{
    return x+y+z;
}
int main()
{
cout<<maximum(7,2,5,45)<<endl;
cout<<add3(2,7)<<endl;
cout<<add1(3,4,8)<<endl; 

return 0;
}                                   