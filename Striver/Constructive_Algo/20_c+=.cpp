#include<bits/stdc++.h>
using namespace std;
int ans(long long a, long long b, long long n){
    int cnt=0;
    while(a<=n && b<=n){
        if(a>=b){
            b+=a;
        }
        else{
            a+=b;
        }
        cnt =cnt+1;
    }
    return cnt;
}
int main(){
    long long t, a,b,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>n;
        cout<<ans(a,b,n)<<" ";
    }
    return 0;
}