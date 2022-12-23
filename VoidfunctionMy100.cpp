#include<iostream>
using namespace std ;
float add(float x,float y)
{
  float z;
  z=x+y;
  return z;
}
int main()
{
   float x,y,z;
    cin>>x>>y;
    z=add(x,y);
    cout<<z<<endl;


    
    return 0;
}