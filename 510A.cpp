#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int start=1;
    vector<vector<char>>ans(n,vector<char>(m,'#'));
    for(int i=0;i<n;i++){
        if(i%2==1){
            if(start%2==1){
                for(int j=0;j<m-1;j++) ans[i][j]='.';
            }
            else{
                for(int j=1;j<m;j++) ans[i][j]='.';
            }
            start++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}