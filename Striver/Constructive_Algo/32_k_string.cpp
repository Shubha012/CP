#include<bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>>k;
    string s;
    cin>>s;
    int l = s.length();
    map<char, int> mp;
    for(int i=0; i<l; i++){
        mp[s[i]]++;
    }
    string s1="";
    //cout<<k;
    for(auto i:mp){
        if(i.second%k==0){ 
            for(int j=0; j<i.second/k; j++)
                s1+=i.first;
        }
        else {s1 =""; break;}
    }
    string add = s1;
    //cout<<s1<<endl;
    for(int i=1; i<k; i++) s1+=add;
    if(s1.length()<l) cout<<"-1";
    else cout<<s1;
    return 0;
}