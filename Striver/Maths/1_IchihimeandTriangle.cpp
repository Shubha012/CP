#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c) cout<<a<<" "<<a<<" "<<a<<endl;
        else if(b==c && c==d) cout<<b<<" "<<b<<" "<<b<<endl;
        else if(a==b && c==d) cout<<a<<" "<<c<<" "<<c<<endl;
        else cout<<b<<" "<<c<<" "<<c<<endl;
    }
    return 0;
}