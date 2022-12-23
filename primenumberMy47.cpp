#include<iostream>
using namespace std;
int main()
{
    int n=8,i=0,count;
    while(n>=i)
    i++;
    {
       if(n%i==0)
        
       {
           count++;
       }
    }
    
      if(count==2)
    {
        cout<<n<<"is a prime no";
    }
    else if(count!=2)
    {
        cout<<n<<"isnot a prime no";
    }

    return 0;
}