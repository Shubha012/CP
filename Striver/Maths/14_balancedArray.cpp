#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        int q = n/2;
        if(q%2==0){
            cout<<"YES"<<endl;
            vector<int>v(n); v[0]=2;
            int i=1, j=n/2; 
            int e = 2, o = 1, cnte = 2, cnto=1;
            for( ; i<n/2; i++, j++){
                e+=2; v[i]=e;
                cnte+=v[i];
                v[j] = o; o+=2;
                cnto+=v[j];
            }
            v[n-1] = cnte-cnto;
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}