#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    // intitution -> taking input as string checking from 1st ndex if it's not equal to  then covert in int and multipy the len and puch in vector.
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        vector<string> v;
        string input;
        cin>>input;
        int l = input.length();
        for(int i=1; i<l; i++){
            if(input[i]!='0'){
                int s = (int(input[i])- 48)* pow(10, l-1-i); // subtracting 48 because int(input[i] gives the ascii value 48 is for 0).
                cout<<input[i]<<" "<<int(input[i]);
                v.push_back(to_string(s));
            }
        }
        if(v.size()==0){
            v.push_back((input));
        }
        else{
            int s = (int(input[0]) - 48)*pow(10, l-1);
            v.push_back(to_string(s));
        }
        cout<<v.size()<<endl;
        for(auto p:v){
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}