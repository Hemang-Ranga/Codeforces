#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_map<int,int> m;
    while(t--){
        int n,i=0;
        cin>>n;
        vector<int> ans;
        for(int j=1; j<=2*n; j++)
        {
            if(m.find(j)==m.end()){
                ans.push_back(j);
                i++;
                m.insert({j,1});
                if(i>1) m.insert({ans[i-1]+ans[i-2],1});
            }
            if(i==n) break;
        }
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        m.clear();
    }
    return 0;
}