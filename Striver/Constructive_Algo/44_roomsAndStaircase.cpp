#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        //cout<<s<<endl;
        for(int j=0; j<n; j++){
            if(s[j]=='1') ans+=2;
            else ans+=1;
        }
        //cout<<ans<<endl;
        int f=-1, l=-1, size = s.length();
        for(int j=0; j<n; j++){
            if(s[j]=='1'){
                f=j; break;
            }
        }
        //cout<<f<<endl;
        for(int j=n-1; j>=0; j--){
            if(s[j]=='1'){
                l = j; break;
            }
        }
       // cout<<l<<endl;
        int maxi=0;
        if(f>=0 && l>=0){
            maxi = max(size-f, l+1);
        }
        //cout<<maxi<<endl;
        cout<<max(ans, maxi*2)<<endl;
    }
    return 0;
}