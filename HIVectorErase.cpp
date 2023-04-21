#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int q,e1,e2;
    cin>>q;
    v.erase(v.begin()+q-1);
    cin>>e1>>e2;
    v.erase(v.begin()+e1-1,v.begin()+e2-1);
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;
}
