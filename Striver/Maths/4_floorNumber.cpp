#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2) cout<<1<<endl;
        else{
            int level = 2;
            int s = 3, e = x+2;
            int i=2;
            while(e<n){
                e = i*x +2; level++;
                i++;
            }
            cout<<level<<endl;
        }
    }
    return 0;
}