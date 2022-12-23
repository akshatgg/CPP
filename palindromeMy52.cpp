#include<iostream>
using namespace std;
int main()
{
    int n=1221,Y,rev=0,m;
    m=n;
    while(n>0)
    {
        Y=n%10;
        n=n/10;
        rev=rev*10+Y;
    }
    cout<<"reverse of a number is"<<"="<<rev<<endl;
    if(rev=m)
    {
        cout<<m<<" is palindrome"<<endl;
    }
    else if(rev!=m)
    {
        cout<<m<<" is not a palindrome"<<endl;
    }
    return 0;
}