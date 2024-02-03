#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,w;
    long long n;
    cin>>k>>n>>w;
    long long pay = k*((w*(w+1))/2);
    long long borrow = pay - n;
    if(borrow>0) cout<<borrow;
    else cout<<0;
    return 0;
}