#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==1) ans =0;
    }
    if (ans ==0) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}