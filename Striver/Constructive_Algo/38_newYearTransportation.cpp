#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n-1);
    int ans =0;
    for(int i=0; i<n-1; i++){
        cin>>v[i];
    }
    int i=0;
    while(i<n-1){
        ans = (i+1) + v[i];
        i += ans-1;
        if( ans == t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}