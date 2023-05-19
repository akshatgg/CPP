#include <iostream>
using namespace std;
class myexception{
};
int division(int x,int y){
    if(y==0)
throw myexception();
    return x/y;
}
int main(){
    try{
        cout<<division(2,0)<<endl;
    }
    catch(myexception e){
        cout<<"not defined"<<endl;
    }
    return 0;
}