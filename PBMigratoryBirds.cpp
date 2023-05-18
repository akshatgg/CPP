#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect;
    int n,t,count=0,copy,r,q=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        vect.push_back(t);
    }
        for(int j=1;j<=5;j++){
       for(int i=0;i<n;i++){
          if(vect[i]==j){
            count++;
           
          }
        }
       if(j==1){
        copy=count;
       }
       if(count>copy){
        copy=count;
        q=j;
       }
       }
       cout<<q<<endl;
    
    return 0;
}