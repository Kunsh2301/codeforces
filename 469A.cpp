#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool>visited(n,false);
    int p;
    cin>>p;
    vector<int>pele(p);
    for(int i=0;i<p;i++){
        cin>>pele[i];
        visited[pele[i]-1]=true;
    } 
    int x;
    cin>>x;
    vector<int>xele(x);
    for(int i=0;i<x;i++){
        cin>>xele[i];
        visited[xele[i]-1]=true;
    } 
    bool found=true;
    for(int i=0;i<n;i++){
        if(!visited[i]) found=false;
    }
    cout<<(found?"I become the guy.":"Oh, my keyboard!");
    return 0;
}