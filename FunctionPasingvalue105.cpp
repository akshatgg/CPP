#include<iostream>
using namespace std;
int swap(int a, int b)                                             
{
    int temp;
    cout<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}
int main()
{
    
    swap(10,20);
    return 0;
}