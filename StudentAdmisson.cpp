#include <iostream>
using namespace std;
class Students{
public:
int roll;
   static int add;
void rollno(){
    add=1;
    add++;
    cout<<add<<endl;
}
};
int Students::add;
int main(){
    Students s1,s2;
   s1.rollno();
   cout<<Students::add;
    return 0;
}