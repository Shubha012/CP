#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum=1, cnt=1;
    for(int i=2; sum<x; i++){
        sum+=i; cnt++;
    }
    cout<<cnt;
    return 0;
}