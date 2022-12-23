#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]=" programming";
    char s2[20]="g";
     if(strstr(s1,s2)==NULL)
    {
        cout<<"not found"<<endl;
    }
    
    else
    {
        cout<<strstr(s1,s2)<<endl;
    }
    return 0;
}