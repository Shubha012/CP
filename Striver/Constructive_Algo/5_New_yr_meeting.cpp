#include<bits/stdc++.h>
using namespace std;
int main(){
    // intitution --> friends  whose house is in middle will be taken as shortest distance.
    vector<int> v(3);  // have taken the vector because it ease in sorting the things up.

    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(), v.end());
    int mid = v[1];
    int ans = (v[1]-v[0]) + (v[2]-v[1]);
    cout<<ans;

    return 0;
}