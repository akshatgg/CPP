#include<iostream>
using namespace std;
int main()
{
     string s1;
    string str="how";
    str.append("   you " );
    cout<<str<<endl;
    cout<<str.size()<<endl;
    str.insert(4,"area ",3);
    cout<<str<<endl;
    getline(cin,s1);
    return 0;
}