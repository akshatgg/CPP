#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



struct sentence{
    int numb;
    string word;
};
int main()
{
    sentence sentence1,sentence2;
    cin>>sentence1.numb>>sentence1.word>>sentence2.word>>sentence2.numb;
    cout<<sentence1.numb<<" "<<sentence1.word<<" "<<sentence2.word<<" "<<sentence2.numb<<endl;
    
    return 0;
}

   
