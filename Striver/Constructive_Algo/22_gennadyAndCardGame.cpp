#include<bits/stdc++.h>
using namespace std;
int main(){
    string table;
    vector<string> hand(5);
    for(int i=0; i<5; i++){
        cin>>hand[i];
    }
    for(int i=0; i<5; i++){
        if(table[0]==hand[i][0] || table[1]==hand[i][1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}