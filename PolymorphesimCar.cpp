#include <iostream>
using namespace std;
class car{
    public:
    virtual void start(){
        cout<<"car start"<<endl;
    }
    virtual void stop(){
        cout<<"car stop";
    }
};
class swift : public car
{
    public:
    void start(){
        cout<<"swift start"<<endl;
    }
    void stop(){
        cout<<"swift stop"<<endl;
    }
};
class odd :public car
{ 
    public:
    void start(){
      cout<<"odd start"<<endl;
    }
    void stop(){
        cout<<"odd stop"<<endl;
    }
};

int main(){
    car ce;
  car *c=new swift();
  c->start();
 c=new odd();
 c->start();
    return 0;
}