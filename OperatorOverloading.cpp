#include<iostream>
using namespace std;
   class complex{
    public:
    int real;
    int img;
                                                            //  complex add(complex c)
    complex operator+(complex c){                         
     complex temp;
     temp.real=real+c.real;
     temp.img=img+c.img;
     return temp;
    }

   };
int main()
{
   complex c1,c2,c3;
   c1.real=10 ,c1.img=13;
   c2.real=14, c2.img=43;
                                                                    // c3=c1.add(c2)
   c3=c1+c2;                                                    
   cout<<c3.real<<endl<<c3.img<<endl;
    return 0;
}