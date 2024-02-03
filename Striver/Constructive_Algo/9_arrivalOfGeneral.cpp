#include<bits/stdc++.h>
using namespace std;
int search(int n, vector<int>&v, int key, int ch){
    int ind;
    for(int i=0; i<n; i++){
        if(ch==1 && v[i]==key) {
            return i;
        }
        else if(ch==0 && v[i]==key) {
            ind =i;
        }
    }
    return ind;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans =0;
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());
    int max_ind = search(n,v, maxi, 1);
    int min_ind = search(n, v, mini, 0);
    if(max_ind==0 && min_ind == n-1){
        ans = 0;
    }
    else if(max_ind<min_ind) ans = max_ind + (n-1-min_ind);
    else ans = (max_ind + (n-1-min_ind)) -1 ;
    cout<<ans;
    return 0;
}