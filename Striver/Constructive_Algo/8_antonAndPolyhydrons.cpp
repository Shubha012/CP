#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(auto i:s){
        if(i=="Tetrahedron") sum+=4;
        else if(i=="Cube") sum+=6;
        else if(i=="Octahedron") sum+=8;
        else if(i=="Dodecahedron") sum+=12;
        else sum+=20;
    }
    cout<<sum;
    return 0;
}