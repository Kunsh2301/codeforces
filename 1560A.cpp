#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>store;
    for(int i=1;i<=2000;i++) if(!(i%3==0) && !(i%10==3)) store.push_back(i);
    while(t--){
        int n;
        cin>>n;
        cout<<store[n-1]<<"\n";
    }
    return 0;
}