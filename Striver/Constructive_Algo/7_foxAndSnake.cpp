#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int f=0;
    vector<vector<string>> snake(row, vector<string>(col, "."));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i%2==0){
                snake[i][j] = '#';
            }
            else{
                if(f==0){
                    f=1;
                    snake[i][col-1]='#';
                    break;
                }
                else{ 
                    f=0;
                    snake[i][0]='#'; break;
                }
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++ ){
            cout<<snake[i][j];
        }
        cout<<endl;
    }
    return 0;
}