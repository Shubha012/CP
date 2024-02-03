#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int cnt =1;
    int ans = 1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i!=0 && v[i]>v[i-1]) cnt++;
        else{
            ans = max(ans,cnt);
            cnt=1;
        }
    }
    cout<<max(ans,cnt);
    return 0;
}