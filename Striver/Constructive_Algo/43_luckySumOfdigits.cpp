#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n7= n/7;
    int n4 = (n-(n7*7))/4 ;
    while((n4*4)+(n7*7)!=n){
        n7--;
        n4 = (n-(n7*7))/4;
        if(n7<0){
            cout<<-1;
            return 0;
        }
    }
    for(int i=0; i<n4; i++){
        cout<<"4";
    }
    for(int i=0; i<n7; i++){
        cout<<"7";
    }
    return 0;
}