#include<iostream>
using namespace std;
int main()
{
    string s="Akshat Gupta";
    char s2[100];
    // cout<<"enter your  name ";
    // cin.get(s,100);
    cout<<s<<endl;
    
    cin.ignore();

    cout<<"enter your name again ";
    cin.get(s2,100);
    cout<<s2<<endl;
    return 0;
}