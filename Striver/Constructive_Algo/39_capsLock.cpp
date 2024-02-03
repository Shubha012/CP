#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    bool f = 1;
    for(int i=1; s[i]!='\0'; i++){
        if( s[i]>=97) {
            f = 0;
            break;
        }
    }
    if(f){
        if(s[0]>=65 && s[0]<=90) s[0] = s[0]+32;
        else s[0] = s[0]-32;
        for(int i=1; s[i]!='\0'; i++){
            s[i] = s[i]+32;
        }
    }
    cout<<s;
    return 0;
}