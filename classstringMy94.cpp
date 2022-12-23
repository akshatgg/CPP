#include<iostream>
using namespace std;
int main()
{
    string str="programming is good";
    string str1=" but not everyone";
    cout<<str.substr(6,7)<<endl;
    cout<<str.at(15)<<endl;
    str=str+str1;
    cout<<str<<endl;
    cout<< str.length()<<endl;
    cout<<str[19]<<endl;
    cout<<str.front()<<endl;
    cout<<str.back()<<endl;
    str1=str;
    cout<<str1<<endl;
    return 0;
}