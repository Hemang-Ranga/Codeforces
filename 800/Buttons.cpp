#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(b + c/2 < a + c - c/2) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}