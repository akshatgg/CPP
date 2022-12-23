#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter day number";
    cin>>day;
    if(day==1)
    {
        cout<<"mon";
    }
    else if(day==2)
    {
        cout<<"tue";
    }
    else if(day==3)
    {
        cout<<"wed";
    }
    else if(day==4)
    {
        cout<<"thur";
    }
    else if(day==5)
    {
        cout<<"fri";
    }
    else if(day==6)
    {
        cout<<"sat";
    }
    else if(day==7)
    {
        cout<<"sun";
    }
    else if(day>7|| day<0)
    cout<< "invalid number";




return 0;
}