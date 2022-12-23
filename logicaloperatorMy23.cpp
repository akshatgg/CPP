#include<iostream>
using namespace std;
main()
{
    int hours;
    cout<<"enter hours";
    cin>>hours;
    if (hours >=9 && hours<=18)
    {
        cout<<"working";
    }
    else
    {
        cout<<"leisure";
    }
    return 0;
}