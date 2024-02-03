#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s; cin>>s;
    string ans = "";
    ans+=s[0];
    int i=1, c=1;
    while(c<n){
        ans+=s[c];
        i++;
        c = (i*(i+1))/2;
    }
    cout<<ans;
    return 0;
}