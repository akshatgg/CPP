#include<iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct sentence{
   
   
   int numb;
   string words; 

};
  int main()
  {
   sentence sentence1,sentence2;
   cin>>sentence1.numb>>sentence1.words>>sentence2.words>>sentence2.numb;
   
   
   cout<<sentence1.numb<<endl;
   cout<<sentence2.words<<","<<sentence1.words<<endl;
   cout<<sentence2.numb;
   cout<<endl;
cout<<sentence1.numb<<","<<sentence1.words<<","<<sentence2.words<<","<<sentence2.numb<<endl;

   return 0;
  }
