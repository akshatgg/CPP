#include<iostream>

using namespace std;

enum day {mon,tue=5,wed,thu=8,fri,sat,sun};
enum dept{cs,it,ece,civil};
int main()
{
    day d;
    d=mon;
    
    dept dep;
    dep=cs;
    cout<<d<<endl<<thu<<endl<<dep<<endl<<ece<<endl;
    return 0;

}