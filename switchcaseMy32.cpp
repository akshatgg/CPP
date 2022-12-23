#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter day number";
    cin>>day;

    switch(day)
    {
        case 1:cout<<"mon"<<endl;

        case 2:cout<<"tue"<<endl;
             break;
        case 3:cout<<"wed"<<endl;
             break;
        case 4:cout<<"thu"<<endl;
             break;
        default:cout<<"invalid number"<<endl;
    }
    return 0;
}