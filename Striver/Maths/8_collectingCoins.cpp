#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        vector<int>v(3);
        int n;
        for(int i=0; i<3; i++) cin>>v[i];
        cin>>n;
        sort(v.begin(), v.end());
        int lar = v[2];
        n = n-(v[2]-v[1]);
        n = n- (v[2]-v[0]);
        // cout<<n;
        if(n>=0 && n%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}