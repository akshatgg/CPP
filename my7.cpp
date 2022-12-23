#include<iostream>
using namespace std;
int main()
{
    
    float v,u,a,displacement;
    cout<<"enter u,v,a";
    cin>>u>>v>>a;
    displacement=(v*v-u*u)/(2*a);
    cout<<"displacement is"<< displacement;
    return 0;
}
