#include <iostream>
using namespace std;
class Test{
    public:
    int a;
    static int count;
void fun(){
     a=10;
    count++;
    cout<<count<<endl;
    cout<<a<<endl;
}
static int getcount(){
    return count;
}
};
int Test::count=0;
int main(){
    Test t1,t2;
    t1.fun();
    t2.fun();
    t2.count=23;
     t1.fun();
    t2.fun(); 
    cout<<Test::count<<endl;
    cout<<Test::getcount()<<endl;

    
    return 0;
}