#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    int cnt4 =0, cnt7 = 0;
    if(x<0){
        cout<<"NO";
        return 0;
    }
    while(x>0){
        long long r = x%10;
        if(r==4) cnt4++;
        else if(r==7) cnt7++;
        x = x/10;
        cout<<x<<endl;
    }
    cout<<cnt4<<" "<<cnt7<<endl;
    if(cnt4+cnt7==4 || cnt4+cnt7==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}