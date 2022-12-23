#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    char s[10]="good";
    char s2[20]=" morning ";
    strcat(s,s2);
    cout<<s<<endl;
    return 0;
}