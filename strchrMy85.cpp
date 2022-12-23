#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="programming";
    if(strchr(s1,'k')== NULL)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else
    {
       cout<<strchr(s1,'k')<<endl;
    }
    return 0;
}