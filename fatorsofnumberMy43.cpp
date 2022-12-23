#include<iostream>
using namespace std;
int main()
{
    int n=8,i=1;
    while(n>=i)
    {
        if(n%i==0)
        {
            cout<<n<<"%"<<i<<"="<<n%i<<endl;
        }
       
        
    i++;
    }
    return 0;
}
