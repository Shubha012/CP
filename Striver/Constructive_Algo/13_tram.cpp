#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    int ans =0, prev=0;
    for(int i=1; i<n; i++){
        prev+=(a[i-1][1] - a[i-1][0]);
        ans = max(ans, prev);
    }
    cout<<ans;
    return 0;
}