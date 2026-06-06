#include<bits/stdc++.h>
using namespace std;

int maxprice(int l, int a, int b){
    vector<int> v;
    v.push_back(a);
    int k = (a+b)%l;
    if(k==a || a==l-1){
        return a;
    }
    while(k!=a){
        v.push_back(k);
        k = (k+b)%l;
        if(k==l-1) return k;
    }
    return *max_element(v.begin(), v.end());
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, a, b;
        cin>>l>>a>>b;
        cout<<maxprice(l,a,b)<<endl;
    }
    return 0;
}
