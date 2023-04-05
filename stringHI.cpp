#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int main()
 {
char A[3][3];
int i,j;
for ( j=0;j<3;j++)
{
  
for( i=0;i<3;i++)
  {
    if(i==2 && j==2){
    }


    else {
      cin>>A[i][j];
    }

    
    if(i==2)
    {
      cout<<endl;
    }
    else if(i!=2)
    {
      cout<<A[i][j];
    }
  }
}               
// for ( j=0;j<3;j++)
// {
  
// for( i=0;i<3;i++)
//   {
//     if(i==2)
//     {
// cout<<"no";
//     }
//     if(i!=2)
//     {
//       cout<<A[i][j]<<endl;
//     }
//   }
// }

    return 0;
}