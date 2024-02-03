#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        int x1 = a>=c ? -1:1;
        int x2 = a<=c/b ? -1:b;
        cout<<x1<<" "<<x2;
        
    }
    return 0;
}