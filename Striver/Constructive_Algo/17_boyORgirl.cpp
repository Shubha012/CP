#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> mp;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    if(mp.size()%2==0) cout<<"CHAT WITH HER !";
    else cout<<"IGNORE HIM !";
    return 0;
}