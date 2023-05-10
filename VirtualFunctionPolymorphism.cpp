#include <iostream>
using namespace std;
class base{
        public:
  virtual void fun(){
        cout<<"Is fun1"<<endl;
    }
};
// class basee{
// public:
// void fun(){
//     cout<<"Is fun3"<<endl;
// }
// };
class derived : public base
{
    public:
    void fun(){
        cout<<"Is fun2"<<endl;
    }
};
int main(){
derived d;
base *p=new derived();           //or you can  write this base *p=&d;//
p->fun();
derived *ptr=new derived();  
ptr->fun();


    return 0;
}
