#include<iostream>
using namespace std;
void* fun(int size) 
{
    int A[size];
// int A[size];
int i,n;
for(i=0;i<size;i++){
    cin>>A[i];
}
}
// void max(int size)
// {
//     int max,i;
//     int A[size];
//     cout<<A[size-1];
//     max=A[0];
//     for(i=0;i<size;i++)
//     {
//         if(A[i]>max){
//             max=A[i];
//         }
//         else{
//             max=A[i];
//         }
//     }
//     cout<<"max is"<<max;
// }
int main()
{
    int i,size,max;
    cin>>size;
    int A[i];
    fun(size);
    // cin>>A[i];
    // max(size);
     max=A[0];
    for(i=0;i<size;i++)
    {
        if(&A[i]>max){
            max=A[i];
        }
        // else{
        //     max=A[i];
        // }
    }
    cout<<"max is"<<max;
    cout<<size;         
    return 0;
}