#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans;
    for(int i=0; i<t; i++){
        string x;
        cin>>x;
        int rem = int(x[0]) - '0';
        ans = (rem-1)*10 ;
        if(x.length()==4) ans+=10;
        else if(x.length()==3) ans+=6;
        else if(x.length()==2) ans+=3;
        else ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}