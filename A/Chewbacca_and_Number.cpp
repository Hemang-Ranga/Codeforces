#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x,q,r,a=1,sum=0;
    cin>>x;
    q=x;
    vector<int> nums;
    while(q){
        r=q%10;
        if(q<10 && r==9);
        else if(r>=5) r=9-r;
        nums.push_back(r);
        q=q/10;
    }
    for(int i=0; i<nums.size(); i++){
        sum += nums[i]*a;
        a*=10;
    }
    cout<<sum;
    return 0;
}