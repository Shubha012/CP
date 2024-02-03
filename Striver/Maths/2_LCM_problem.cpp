#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long k=0; k<t; k++){
        long long l,r;
        cin>>l>>r;
        long long x = l, y=-1;
        if(l*2<=r) y = l*2;
        if(y!=-1) cout<<x<<" "<<y<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}