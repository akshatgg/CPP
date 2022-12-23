#include<iostream>
  using namespace std;
  enum day{mon,tue,wed,thu,fri,sat,sun};


  int main()

 {
     int d;
    
     d=sun;
     cout<<d<<endl;
    if(d==6)
    {
        cout<<"holiday";
    }
    else
    {
        cout<<"working";

    }
   
     return 0;
 }