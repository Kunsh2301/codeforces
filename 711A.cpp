#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(5));
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>grid[i][j];
        }
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(grid[i][0]=='O' && grid[i][1]=='O'){
            grid[i][0]='+';
            grid[i][1]='+';
            found=true;
            break;
        }
        if(grid[i][3]=='O' && grid[i][4]=='O'){
            grid[i][3]='+';
            grid[i][4]='+';
            found=true;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}