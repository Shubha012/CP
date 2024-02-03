#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        int cnt=0;
        cin>>n>>m;
        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[n][m];
            }
        }

        for(int j=0; j<m-1; j++){
            if(a[n-1][j] == 'D') cnt++;
        }
        for(int j=0; j<n-1; j++){
            if(a[j][m-1] == 'R') cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}