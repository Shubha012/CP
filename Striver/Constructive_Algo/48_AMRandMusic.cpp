#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++){
        int num ;
        cin>> num;
        v.push_back({num, i+1});
    } 
    sort(v.begin(), v.end());
    int i=0; 
    int sum=0;
    while(i<n && v[i].first+sum<=k){
        sum+=v[i].first; i++;
    }
    cout<<i<<endl;
    i--;
    while(i>=0){
        cout<<v[i].second<<" ";
        i--;
    }
    return 0;
}