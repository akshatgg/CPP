#include<iostream>
using namespace std;
class Base
{
    public:
    Base(){
        cout<<"Non parametric constructor"<<endl;
    }
    Base(int a){
        cout<<"parametric constructor"<<" "<<a<<endl;
    }
};
class Derived :public Base
{
public:
 Derived(){
    cout<<"not parametric constructor in Derived"<<endl;
}
 Derived(int l){
    cout<<"parametric constructor in Derived"<<" "<<l<<endl;
}
Derived(int a,int x) :Base(x)
{
   cout<<"power of derived"<<" "<<a<<endl;
}
};
int main(){
    Derived d(3);
    Derived d1;
    Derived  d2(2,5); 


    
    return 0;
}