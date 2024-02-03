#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int n; cin>>n;
        vector<int> skill(2*n);
        for(int i=0; i<2*n; i++){
            cin>>skill[i];
            
        }
        sort(skill.begin(), skill.end());
        cout<<skill[n] - skill[n-1]<<endl;
    }
    return 0;
}