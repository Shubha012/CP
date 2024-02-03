#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n, m;
        cin>>n>>m;
        long long a = n*m;
        cout<<int(ceil(a/2.0))<<endl;
    }
    return 0;
}