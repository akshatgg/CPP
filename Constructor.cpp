#include<iostream>
using namespace std;
class rectangle {
private:
int length;
int breadth;
public:
rectangle(){
    length=0;
    breadth=0;
}
void setlength(int l){
        if(l>=0){
            length=l;
        }
        else{
            length=abs(l);
        }
    }
        void setbreadth(int b){
            if(b>=0){
            breadth=b;
        }
        else{
            breadth=abs(b);
        } 
        }
rectangle(int l, int b){
    setlength(l);
    setbreadth(b);
}
rectangle(rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
int area(){
    return length*breadth;
}




};
int main(){
    rectangle r1(12,43);
    rectangle r2(r1);
    cout<<r1.area()<<endl<<r2.area();
    return 0;
}