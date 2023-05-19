#include <iostream>
using namespace std;

int division(int x,int y)
{
    if(y==0)
    throw string("division by o is not possible");
    return x/y;
}
int main(){
    try{
        cout<<division(2,0)<<endl;
    }
    catch(string e){
        cout<<"not defined "<<e<<endl;
    }
    return 0;
}