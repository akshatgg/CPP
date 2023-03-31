#include<iostream>
using namespace std;
 int max(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d){
    //    cout<<a<<endl;
       return a;
    }
       else if(b>c && b>a && b>d){
    //    cout<<b<<endl;
    return b;
       }
       else if(c>a && c>b && c>d){
    //    cout<<c<<endl;
    return c;
       }
       else{
        // cout<<d<<endl;
        return d;
       }
}
 int main()
{
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    cout<<max(x,y,z,w)<<endl;
    // max(x,y,z,w);
    return 0;
}