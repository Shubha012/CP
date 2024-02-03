#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string op;
        cin>>op;
        if(op=="++X" || op=="X++") x++;
        if(op=="--X" || op=="X--") x--;
    }
    cout<<x;
    return 0;
}
