#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        vector<int>a(3);
        for(int i=0; i<3; i++) cin>>a[i];
        sort(a.begin(), a.end());
        if(a[1]==a[2]){
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}