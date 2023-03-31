#include<iostream>
 using namespace std;
 int max(int a,int b, int c,int d)
 {
   return a>b && a>c && a>d ? a:(b>a && b>c && b>d ? b:(c>a && c>b && c>d ? c :d));
 }
 int main()
 {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c)<<endl;
    return 0;
 }
