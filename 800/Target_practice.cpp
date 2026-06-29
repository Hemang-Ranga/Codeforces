#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        char target[10][10];
        for (int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>target[i][j];
            }
        }
        int score=0, point=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(i==0 || i==9 || j==0 || j==9) point=1;
                else if(i==1 || i==8 || j==1 || j==8) point=2;
                else if(i==2 || i==7 || j==2 || j==7) point=3;
                else if(i==3 || i==6 || j==3 || j==6) point=4;
                else if(i==4 || i==5 || j==4 || j==5) point=5;
                if(target[i][j]=='X') score+=point;
            }
        }
        cout<<score<<endl;
    }
    return 0;
}