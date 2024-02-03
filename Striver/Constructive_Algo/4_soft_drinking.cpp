#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total = k*l;
    int slices = c*d;
    int salt = p;
    
    int mini = min({total/ (nl*n), p/(np*n), slices/n});
    cout<<mini;
    // if(mini == total){
    //     cout<< total/ (nl*n);
    // }
    // else if(mini == salt){
    //     cout<< p/(np*n);
    // }
    // else{
    //     cout<< slices/n;
    // }

    return 0;
}