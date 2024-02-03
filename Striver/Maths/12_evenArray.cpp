#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        vector<int>v(n);
        int odd =0, even =0;
        for(int j=0; j<n; j++){
            cin>>v[j];
            if(j%2==0 && v[j]%2!=0) odd++;
            else if(j%2!=0 && v[j]%2==0) even++;
        }
        if(odd==even) cout<<odd<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}