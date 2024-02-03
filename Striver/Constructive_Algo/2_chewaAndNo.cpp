#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//string s;
int main(){
    // int x=0;
    // cin>>x;
    // int r = 0, rem=0;
    // int n=0,f=0;
    // while(x>0){
    //     rem = x%10;
    //     n = min(rem, 9-rem) + n*10;
    //     x = x/10;
    // }
    // // reversing the ans
    // cout<<n<<" ";
    // x=0, rem=0;
    // r = n%10; 
    // if(r==0){ f=1;}
    // while(n>0){
    //     if(f) { f=0;
    //         rem = 9;
    //     }
    //     else rem = n%10;
    //     x = rem + x*10;
    //     n = n/10;
    // }
    // cout<<x;

    // using string
    string s;
    cin>>s;
    int i=0;
    if(s[0]=='9') i++;
    while(i<s.length()){
        if(s[i]<'5') i++;
        else if(s[i]>='5'){
            s[i] =( '9' - s[i]) + '0';
            i++;
        }
    }
    cout<<s;
    return 0;
}