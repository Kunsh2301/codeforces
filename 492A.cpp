#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int start=1;
    int level=1;
    while(start<=n){
        level++;
        n-=start;
        start+=level;
    }
    cout<<level-1;
}