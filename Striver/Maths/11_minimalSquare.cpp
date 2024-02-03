#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
        int x = max(a,b);
        int y = min(a,b);
        if(2*y>=x) cout<<4*y*y<<endl;
        else cout<<x*x<<endl;
        // if(a==b) {
        //     int x = 2*a;
        //     cout<<x*x<<endl;
        // }
        // else if(min(a,b)==1) cout<<max(a,b)*max(a,b)<<endl;
        // else {
        //     int x = 2*min(a,b);
        //     cout<<x*x<<endl;
        // }
    }
    return 0;
}