#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n);
    int ans = -1;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        int flag = 1;
        for(int j=i-1; j>=min(0,i-x); j--){
            if(v[i]>v[j]){
                flag =0;
                break;
            }
        }
        if(flag){
            for(int j=i+1; j<max(n, i+y+1); j++){
                if(v[i]>v[j]){
                flag =0;
                break;
            }
            }
        }
        if(flag){
            ans = i+1; break;
        }
    }
    cout<<ans;
    return 0;
}