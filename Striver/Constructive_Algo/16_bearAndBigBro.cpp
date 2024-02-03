#include<bits/stdc++.h>
using namespace std;
int main(){
    int l, b;
    int year=0;
    cin>>l>>b;
    while(l<=b){
        l = l*3;
        b = b*2;
        year++;
    }
    cout<<year;
    return 0;
}