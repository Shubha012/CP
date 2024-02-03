#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[7], sum=0;
    for(int i=0; i<7; i++){ 
        cin>>a[i];
        sum+=a[i];
        if(sum>=n){
            cout<<i+1;
            return 0;
        }
    }
    int i=0;
    while(sum<=n){
        if(i>6) i=0;
        sum+=a[i++];
    }
    cout<<i+1;
    return 0;
}