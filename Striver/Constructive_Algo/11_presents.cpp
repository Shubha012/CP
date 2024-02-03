#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp;
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0; i<x; i++){
        cin>>v[i];
        mp[v[i]] = i+1;
    }
    for(auto j: mp){
        v[j.first-1] = j.second;
    }
    for(int i=0; i<x; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}