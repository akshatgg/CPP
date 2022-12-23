#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    char s1[10]="good";
    char s2[20]="";
    strncpy(s2,s1,2);
    cout<<s2<<endl;
    return 0;
}