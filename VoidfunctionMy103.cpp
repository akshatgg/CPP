#include <iostream>
using namespace std;

template<class T>
T maxim(T x,T y)
{
   return x>y?x:y;
// if(x>y)
//   return x;
// else
//   return y; 
}


float add(float x,float y)
{
    return x+y;
} 
 int main()
 {
    cout<<maxim(2,6)<<endl;
    cout<<maxim(56.6,56.8)<<endl;
    cout<<maxim(2.5f,7.5f)<<endl;
    cout<<add(53,76)<<endl;
    return 0;
 }