#include <iostream>
using namespace std;
class base{
public :
void display(){
cout<<"base display"<<endl;
}
};
class Derived : public base
{
    public:
    void display1(){
        cout<<"Derived display"<<endl;
    }
};
int main(){
   Derived d,d1;
   Derived *ptr=&d;
   ptr->display1();
   ptr->display();
   base *p=&d;
   p->display();
    return 0;
}