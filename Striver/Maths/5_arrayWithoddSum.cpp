#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        int n;
        cin>>n;
        vector<int>v(n);
        int odd=0, even =0, sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]%2!=0 || v[i]==1) odd++;
            else even++;
            sum+=v[i];
        }
        if(sum%2!=0 || sum==1) cout<<"YES"<<endl;
        else{
            if(odd!=0 && even!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}