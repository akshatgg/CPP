#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="today";
    
    string::iterator it;
    
    for(it=str.begin();it!=str.end();it++)
    {
    *it=*it-32;
    cout<<*it<<endl;
    }
    cout<<str<<endl;
    string::reverse_iterator it1;
    for(it1=str.rbegin();it1!=str.rend();it1++)
    {
        // *it1=*it1-32;
        cout<<*it1;
    }

     cout<<endl;
    return 0;
}