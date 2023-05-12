#include <iostream>
#include <math.h>
using namespace std;
class shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
  int setlength(int l){
    return l;
  }
  int setbreadth(int b){
    return b;
  }
};
class rectangle : public shape
{
    private:
   int length=0;
   int breadth=0;

    public:
    rectangle(int l,int b){ 
    length=l; 
    breadth=b; 
    }
  float area(){
 return length*breadth;
  }
  float perimeter(){
   return 2*(length+breadth);
  }
};
class circle : public shape
{
    private:
    int radius=0;
    public:
    circle(int r){
        radius=r;
    }
    int setradius(int rd){
    radius=rd;
    return rd;
    }
      float area(){
   return 3.14*pow(radius,2);
  }
  float perimeter(){
    return 2*3.14*radius;
  }
};

int main(){
    rectangle r(3,4);
    int l1=r.setlength(2);
    circle c(4);
    int r1=c.setradius(3) ;
    shape *s=new circle(r1);
    
    cout<<s->area()<<endl;
    s=new rectangle(l1,4);
    cout<<s->area()<<endl;
    return 0;

}