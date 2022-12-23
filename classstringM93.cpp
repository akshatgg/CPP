#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s="Hello";
    char str[10];
    s.copy(str,2);
    cout<<str<<endl;
    str[10]= '\0';
    return 0;
}