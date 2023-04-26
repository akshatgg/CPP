#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    int r=real;
    int i=img;
 friend complex operator+(complex c1,complex c2);

};

complex add(complex c1,complex c2){
    
    complex temp;
    temp.r=c1.r+c2.r;
    temp.i=c1.i+c2.i;
    return temp;
}
int main(){
complex c1,c2,c3;
 c1.r=10 ,c1.i=13;
   c2.r=14, c2.i=43;
    c3=add(c2,c1);
cout<<c3.r<<endl<<c3.i<<endl;
    return 0;
}