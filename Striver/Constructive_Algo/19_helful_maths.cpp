#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    if(input.length()==1){
        cout<<input;
        return 0;
    }
    vector<string> s(input.length());
    int cnt1 = 0, cnt2=0, cnt3=0;
    for(int i=0; input[i]!='\0'; i++){
        if(input[i]=='1'){
            cnt1++;
        }
        else if(input[i]=='2'){
            cnt2++;
        }
        else if(input[i]=='3'){
            cnt3++;
        }
    }
    int i=0;
    while(cnt1!=0){
        s[i]='1';
        if(i+1 !=s.size()) s[i+1] ='+';
        i+=2; cnt1--;
    }
    while(cnt2!=0){
        s[i]='2';
        if(i+1 !=s.size()) s[i+1] ='+';
        i+=2; cnt2--;
    }
    while(cnt3!=0){
        s[i]='3';
        if(i+1 !=s.size()) s[i+1] ='+';
        i+=2; cnt3--;
    }
    for(auto i:s){
        cout<<i;
    }
    return 0;
}