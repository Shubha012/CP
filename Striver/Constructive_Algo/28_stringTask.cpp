#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string ans="";
    string vow = "AaEeIiOu";
    for(int i=0; s[i]!='\0'; i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            if(s[i]!='a' && s[i]!='A' && s[i]!='i' && s[i]!='I' && s[i]!='o'&& s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='e' && s[i]!='E'&& s[i]!='y' && s[i]!='Y'){
                if(s[i]>=65 && s[i]<=90) {
                    ans += ('.');
                    ans+=tolower(s[i]);
                }
                else{ 
                    ans+='.';
                    ans+=s[i];}
            }
        }
    }
    cout<<ans;
    return 0;
}