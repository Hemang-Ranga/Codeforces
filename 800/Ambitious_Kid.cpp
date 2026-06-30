#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int abs_min=1e5+1;
    for(int i=0; i<n; i++){
        if(abs(a[i])<abs_min) abs_min=abs(a[i]);
    }
    cout<<abs_min;
    return 0;
}