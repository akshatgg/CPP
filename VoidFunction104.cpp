#include<iostream>
using namespace std;
int add(int x, int y)
{
    cout<<x+y<<endl;
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
// int add(int x,int y,int z=0)
// {
//     return x+y+z;
// }
int main()
{
  add(2,3);
cout<<add(3,4,0)<<endl; 
return 0;
}                                   