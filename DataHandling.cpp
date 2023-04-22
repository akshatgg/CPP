#include<iostream>
using namespace std;
 class rectangle{
    private:
    int length;
    int breadth;
    public:
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
        int getlength(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }
    
    int area(int a,int b){
        return (a*b);
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};


int main()
{
    rectangle r1,r2;
    // cin>>r1.setlength>>r1.setbreadth;
    r1.setbreadth(2);
    r1.setlength(-3);
    cout<<"Area is"<<r1.area(2,3)<<endl<<"perimeter is"<<r1.perimeter()<<endl;
     r2.setlength(-31);
     r2.setbreadth(32);
     cout<<r2.area(3,4)<<endl<<r2.perimeter()<<endl<<r2.getlength()<<endl;
}