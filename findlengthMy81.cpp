#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cout<<"enter string";
    cin.getline(s,100);
    cout<<"length is"<<"="<< strlen(s) <<endl;
    return 0;
}