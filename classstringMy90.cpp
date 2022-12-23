#include<iostream>
#include<cstring>
// #include<climits>
using namespace std;
int main()
{
    char str[100];
    string s1="Hello";
    cout<<"enter your name";
    cin.getline(str,155);
    cout<<strlen(str)<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl;
    s1.resize(78);
    cout<<s1.capacity()<<endl;
    cout<<s1.max_size()<<endl;
    if(s1.empty())
    {
        cout<<"string is empty";
    }
    else
    {
        cout<<"string is"<<s1<<"string size is"<<"   "<<s1.size()<<endl;
    }
     s1.clear();
    cout<<s1.length()<<endl;

    return 0;
}