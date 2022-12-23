#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string email="akshatg9636@gmail.com";
    int i=(int)email.find('@');
    cout<<i<<endl;
    string username=email.substr(0,i);
    cout<<"user name is "<<username<<endl;
    return 0;
}