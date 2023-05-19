#include <iostream>
#include<math.h>
using namespace std;
    class except
    {
        public:
    void fun()
    {
        int t,x=2,y=0;
        try{
            if(y==0)
            throw 0;
        t=x/y;
        cout<<t<<endl;
        }
        catch(int e){
            cout<<"not possible"<<endl;
        }
    }
    };
int main(){
   except e;
   e.fun();

    return 0;
}