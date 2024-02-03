#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long x,y,n;
        cin>>x>>y>>n;
        long long k, q;
        q = (n-y)/x;
        k = (x*q) + y;
        cout<<k<<endl;
    }

    return 0;
}