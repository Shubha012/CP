#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        if(n==1 || n==2) cout<<1<<endl;
        else{
            int cnt=0;
            for(int i=1; i<n/2; i++){
                int x = n-i;
                if(x<n) cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}