#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<vector<char>>v(8,vector<char>(8));
        int row=-1,col=-1;
        bool found=false;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>v[i][j];
                if(v[i][j]!='.' && !found){
                    row=i;
                    col=j;
                    found=true;
                }
            }
        }
        string ans="";
        for(int i=row;i<8;i++){
            if(v[i][col]!='.'){
                ans+=v[i][col];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}