#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="235";
    char s2[]="54.45";

    long int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout<<x<<endl<<y<<endl;
    return 0;
}