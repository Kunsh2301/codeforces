#include<bits/stdc++.h>
using namespace std;
bool solve(int n,int m){
    if(n==m) return true;
    if(n<m || n%3!=0) return false;
    return solve(n/3,m) || solve(n/3*2,m);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<(solve(n,m)?"YES":"NO")<<endl;
    }
}