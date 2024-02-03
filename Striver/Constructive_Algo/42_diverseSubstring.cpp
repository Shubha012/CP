#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; string s;
    cin>>n>>s;
    string ans = "";
    for(int i=0; i<s.length()-1; i++){
        if(s[i]!=s[i+1]){
            ans+=s[i];
            ans+=s[i+1];
            break;
        }
    }
    if(ans!=""){
        cout<<"YES"<<endl<<ans;
    }
    else{
        cout<<"NO";
    }
    return 0;
}