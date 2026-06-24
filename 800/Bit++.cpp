#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x=0;
    cin>>n;
    while(n--){
        string statement;
        cin >> statement;
        if(statement == "++X" || statement == "X++") x++;
        else if(statement == "--X" || statement == "X--") x--;
    }
    cout<<x;
    return 0;
}