#include <iostream>
using namespace std;
class Test1;
class Test{
private:
int a;
protected:
int b;
friend int main();
friend Test1;
};
class Test1{
public:
Test tm;
int fun()
{
tm.b=89;
tm.a=56;
return tm.a;
}
};
int main(){
Test t;
t.a=78;
t.b=67;
Test1 te;
cout<<te.fun()<<endl;
    return 0;
}