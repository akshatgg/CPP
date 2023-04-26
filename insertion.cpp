#include<iostream>
using namespace std;
 class complex{
  private:
  int real;
  int img;
  public:
 complex(int r=0,int i=0){
  int real=r;
  int img=i;
  }
  friend ostream& operator<<(ostream &out,complex &c);
 };
  ostream& operator<<(ostream &out,complex &c){
out<<c.real<<"+i"<<c.img<<endl;
return out;
 }
int main(){
    complex c(23,89);
    cout<<c;
    operator<<(cout,c);

    return 0;

}