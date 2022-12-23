#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str ="welcome";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<< "str length is "<<count<<endl;
    return 0;
}