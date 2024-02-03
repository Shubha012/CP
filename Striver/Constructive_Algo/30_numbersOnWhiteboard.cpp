#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int n; cin>>n;
        vector<float> v(n);
        vector<vector<float>> v1;
        for(int i=1; i<=n; i++){
            v[i-1] = i;
        }
        for(int i=n-2; i>=0; i--){
            v1.push_back({v[i],v[i+1]});
            v[i] = ceil((v[i]+v[i+1])/2);   
        }
        cout<<v[0]<<endl;
        for(auto i:v1){
            cout<<i[0]<<" "<<i[1]<<endl;
        }
    }
    return 0;
}