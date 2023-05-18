#include<iostream>
using namespace std;
class Base{
    public:
        int a;
    void display()
    {
cout<<"out"<<a<<endl;
    }
};
class Derived:public Base
{
public:
void show(){
    a=8*8;
}
};
int main(){
    Derived d;
    d.show();
    cin>>d.a;
    d.display();
    
    return 0;
}