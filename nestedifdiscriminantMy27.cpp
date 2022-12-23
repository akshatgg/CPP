#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d ;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;

    d=b*b-4*a*c ;
    if(d==0)
    {
        cout<<"roots are real & equal";
        cout<<endl<<(-b/(2*a))<<endl;
    }
    else if (d>0)
    {
        cout<<"roots are real & unequal";
        cout<<endl<<(-b+(sqrt(d)))/(2*a);
        cout<<endl<<(-b-(sqrt(d)))/(2*a);
    }
    else if ( d<0 )
    {
        cout<<"roots are imaginary";
    }
    return 0;
}
