#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin>>n>>m;
    long long cnt = 0;
    if(n==m){
        cout<<0; return 0;
    }
    if(m%n == 0){
        int mod = m/n;
        while(mod!=1){
            if(mod%6 == 0){
                cnt+=2; 
                mod = mod/6;
            }
            else if(mod%2==0){
                cnt++; 
                mod = mod/2;
            }
            else if(mod%3==0){
                cnt++;
                mod = mod/3;
            }
            else{
                cout<<"-1";
                return 0;
            }
        }
        cout<<cnt;
    }
    else cout<<"-1";
    return 0;
}