  #include<iostream>
  #include<math.h>   //conio.h
  using namespace std;
   int main()
  {
    
    float a,b,c,r1,r2;
    cout<<"enter 3 values";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots are"<<r1 <<""<<r2;
    return 0;
  }
  