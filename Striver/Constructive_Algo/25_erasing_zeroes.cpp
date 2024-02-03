#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int s=-1,l=-1;
    for(int i=0; i<t; i++){
        string a; cin>>a;
        for(int j=0; j<a.length(); j++){
            if(a[j]=='1'){ 
                s=j; break;
            }
        }
        for(int j=a.length()-1; j>=0; j--){
            if(a[j]=='1') {
                l=j; break;
            }
        }
        int cnt=0;
        cout<<s<<" "<<l;
        for(int k=s; k<=l; k++){
            if(a[k]=='0') cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}