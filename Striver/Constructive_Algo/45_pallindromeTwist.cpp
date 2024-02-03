#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        string s; cin>>s;
        int f=0, l = n-1;
        int flag = 1;
        while(f<=l){
            if(s[f]==s[l]){
                f++; l--;
            }
            else if(s[f]>s[l]){
                if(s[f]-1!=s[l]+1){
                    cout<<"NO"; flag = 0;
                    break;
                }
                else f++; l--;
            }
            else{
                if(s[f]+1!=s[l]-1){
                    cout<<"NO"; flag = 0;
                    break;
                }
                else f++; l--;
            }
        }

        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}