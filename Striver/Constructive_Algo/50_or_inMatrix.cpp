#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int A[n][m], B[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>B[i][j];
            A[i][j]=1;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(B[i][j]==0){
                for(int k=0; k<n; k++){
                    A[k][j] =0;
                }
                for(int k=0; k<m; k++){
                    A[i][k] =0;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(B[i][j]==1){
                int sum=0;
                for(int k=0; k<n; k++){
                    sum+=A[k][j];
                }
                for(int k=0; k<m; k++){
                    sum+=A[i][k];
                }
                if(sum==0){
                    cout<<"NO"; return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}