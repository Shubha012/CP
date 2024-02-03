#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        string p, h;
        cin>>p>>h;
        if(h.length()<p.length()){
            cout<<"NO"<<endl;
        }
        else{
            bool flag = 0;
            int len_p = p.length();
            int len_h = h.length();
            sort(p.begin(), p.end());
            for(int i=0; i<=len_h - len_p; i++){
                string s = h.substr(i, len_p);
                sort(begin(s), end(s));
                if(s==p){
                    flag = 1; break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
        
    return 0;
}