#include <bits/stdc++.h>
using namespace std;

bool Isgood(vector<int> &arr){
    int n=arr.size(), first=arr[0], cnt1=1, second , cnt2=0;
    for(int i=1; i<n; i++){
        if(arr[i]==first) cnt1++;
        else if(arr[i]!=first && cnt2==0){
            second=arr[i];
            cnt2++;
        }
        else if(arr[i]==second) cnt2++;
        else if(arr[i]!=first && arr[i]!=second) return false;
    }
    if(cnt2==0) return true;
    if(n%2==0){
        if(cnt1==cnt2) return true;
        else return false;
    }
    else{
        if(cnt1 == cnt2 + 1 || cnt2 == cnt1 + 1) return true;
        else return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(Isgood(a)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }    
    return 0;
}