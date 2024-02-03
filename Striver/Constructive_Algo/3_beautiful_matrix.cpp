#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    int row=0, col=0;
    int x;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>x;
            v[i][j] = x;
            if(x==1){
                row=i; col=j;
            }
        }
    }
    int tot = abs(2-row) + abs(2-col);
    cout<<tot;
    return 0;
}