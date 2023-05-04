#include<iostream>
using namespace std;
class Record{
public :
void game(int n,int A[]){
    int max=0,min=0;
int countma=0,countmi=0;

    
    for(int i=0;i<n;i++){
       if(i==0){
        max=A[i];
        min=A[i];
       }
       else{
        if(min>A[i]){
           min=A[i];
           countmi++;
         }
        else if(max<A[i]){
            max=A[i];
            countma++;
        }
        else if(max==A[i]){
            max=A[i];
        }
        else if(min==A[i]){
            min=A[i];
        }
       }
    
    }
    cout<<(countma)<<" "<<countmi<<endl;
}
};




int main(){
    Record r;
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    r.game(n,A);
    return 0;
}