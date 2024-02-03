#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int ans = -1;
    cin>>n>>m;
    while(n>0 && ans%m != 0){
        ans = (n/2) + (n - (n/2));
        n = n-2;
    }
    return 0;
}