#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y){
    if(y==0){
        return 1;
    }
    return x*solve(x,y-1);
}
int main() {
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<solve(x,n)<<endl;
    return 0;
}