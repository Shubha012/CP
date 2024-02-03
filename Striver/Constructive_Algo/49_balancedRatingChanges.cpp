#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int>change(n);
    int sum=0;
    for(int i=0; i<n; i++){
        change[i] = v[i]/2;
        sum+=change[i];
    }
    // cout<<sum;
    int i=0;
    while(sum>0){
        if(v[i]<0 && v[i]%2!=0){
            change[i]++;
            sum--;
        }
        i++;
    }
    while(sum<0){
        if(v[i]>0 && v[i]%2!=0){
            change[i]--;
            sum++;
        }
        i++;
    }
    for(auto x:change){
        cout<<x<<endl;
    }
    return 0;
}