#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool sorted = true;
        if(k>=2) cout<<"YES"<<endl;
        else{
            for(int i=0; i<n-1; i++){
                if(a[i]>a[i+1]){
                    sorted = false;
                    break;
                }
            }
            if(sorted) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}