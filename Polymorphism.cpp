#include <iostream>
#include <math.h>
using namespace std;
class base{
    public:
    void display(){
        cout<<"base class"<<endl;
    }
};
class derived :public base
{
public :
void display(){
    cout<<"derived class"<<endl;
}
};
int main(){
derived d;
base b;
b.display();
d.display();
    return 0;
}