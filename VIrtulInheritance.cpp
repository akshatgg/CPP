#include<iostream>
using namespace std;
class A{
    public:
   
   int  a=40;
   
    
    };
class B : virtual public A
{
public:

};
class C : virtual public A
{
    public:
int b=23;
};
class D : public C,public B
{
    public:
   int no(){
    return b;
   }
    };



int main(){
    D d;
    cout<<d.no()<<endl;
    return 0;
}