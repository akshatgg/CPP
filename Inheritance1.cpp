#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int setlength(int l){
        length=l;
        return l;
    }
    int setbreadth(int b){
        breadth=b;
        return b;
    }
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    } 
    int volume(){
        return length*breadth;
    }
};
class Cuboid : public Rectangle{
private:
int height;
public:
Cuboid(int h)
{
    height=h;
}
int  setheight(int h);
int  getheight(){
    return height;
}
 int volume(){
        return getlength()*getbreadth()*height;
    }

};
int main()
{
    Cuboid c(23);
    c.setlength(12);
    c.setbreadth(34);    
    cout<<c.volume()<<endl;
    Rectangle r;
    cout<<r.getlength()<<endl;
    return 0;
}
    Rectangle::Rectangle(){
        length=1;
        breadth=1;
    }
    //  int Rectangle::setlength(int l){
    //     length=l;
    //     return l;
    // }
    //      int Rectangle::setbreadth(int b){
    //      breadth=b;
    //     return b;
    // }

    
