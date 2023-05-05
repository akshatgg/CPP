#include<iostream>
using namespace std;
class Ron{
  public:
  int sum=0,count=0;
  int Birthday(int n,int A[],int m,int d){
      for(int i=0;i<n;){
          for(int j=0;j<m;j++){
            
        sum=sum+A[i];
              
          
        i++;
          }
        if(sum==d){
            count++;
        }  
        sum=0;
        if(m!=1){ 
        i=i-(m-1);
        }
   
      }
      return count;
  }  
};
int main(){
    Ron r;
    int n;
    cin>>n;
     int A[n];
     for(int i=0;i<n;i++){
         cin>>A[i];
     }
     int m,d;
     cin>>d>>m;
     cout<<r.Birthday(n, A, m, d);
}
