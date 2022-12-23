#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="language";
    string s2="Akshat Gupta";
    string s3="programming";
    string s4="hello";
    cout<<s2.length()<<endl;
    s4.erase();
    cout<<s1.length()<<endl;
    s2.replace(2,5," yup ");
    cout<<s2<<endl;
    s1.swap(s3);
    cout<<s1<<" "<<s3<<endl;
    s1.push_back('z');
    s3.pop_back();
    cout<<s1<<endl;
    cout<<s3<<endl;
    return 0;
}