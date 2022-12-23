#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"1.add\n"<<"2.sub\n"<<"3.multi\n"<<"4.div\n";

    int option;
    cout<<"enter your choice"; 
    cin>>option;

    float a,b,c;
    cout<<"enter a,b";
    cin>>a>>b;

    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    }
    cout<<"result is"<<c<<endl;
    return 0;
}