#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0; i<n; i++) cin>>v[i];
    long long ans = v[n-1];
    for(long long i=n-2; i>=0; i--){
        long long t = min(v[i+1]-1 , v[i]);
        if(t<0) t=0;
        v[i]=t;
        ans+=t;
    }
    cout<<ans;
    return 0;
}