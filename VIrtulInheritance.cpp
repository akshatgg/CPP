#include<iostream>
using namespace std;
class A{
    public:
   
   int  a=40;
   int b=23;
    
    };
class B : virtual public A
{
public:

};
class C : virtual public A
{

};
class D : public C,public B
{
    public:
   int no(){
    return a;
   }
    };



int main(){
    D d;
    cout<<d.no()<<endl;
    return 0;
}