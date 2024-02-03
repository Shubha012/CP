#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1, m1;
    char x;
    cin>>h1>>x>>m1;
    int h2, m2;
    cin>>h2>>x>>m2;
    int ans = (((h1+h2)*60) + m1 +m2)/2;
    if(ans/60<10 && ans%60<10){
        cout<<'0'<<ans/60<<":"<<'0'<<ans%60;
    }
    else if(ans/60<10 && ans%60>=10){
        cout<<'0'<<ans/60<<":"<<ans%60;
    }
    else if(ans/60>=10 && ans%60<10){
        cout<<ans/60<<":"<<'0'<<ans%60;
    }
    else{
        cout<<ans/60<<":"<<ans%60;
    }
    return 0;
}