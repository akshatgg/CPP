#include<iostream>
using namespace std;
 class rectangle{
    public:
    int length;
    int breadth;
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
    cin>>r1.length>>r1.breadth;
    cout<<"Area is"<<r1.area(2,3)<<endl<<"perimeter is"<<r1.perimeter()<<endl;
     r2.length=12;
     r2.breadth=43;
     cout<<r2.area(3,4)<<endl<<r2.perimeter()<<endl;
}