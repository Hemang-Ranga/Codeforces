#include<bits/stdc++.h>
using namespace std;

int minoprn(string &x, string &s){
    int minopr=0;
    while(x.size()<=25*s.size()){
        if(x.find(s) != string::npos) return minopr;
        x+=x;
        minopr++;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        cout<<minoprn(x,s)<<endl;
    }
    return 0;
}