#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, cnt=0;
        cin>>n;
        string s;
        cin>>s;
        bool possible=false;
        for (int i = 0; i < n; i++){
            if (s[i] == '.') cnt++;
        }
        for(int i=1; i<n-1; i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i-1]=='.'){
                possible = true;
                break;
            }
        }
        if(possible) cout<<2<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}