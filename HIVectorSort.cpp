#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k;
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for( auto i:v){
        cout<<i<<" ";
    }
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
