#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int k){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==k) return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(search(a,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}