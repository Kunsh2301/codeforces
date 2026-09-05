#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>store;
    while(n--){
        int x;
        cin>>x;
        store.push_back(x);
    }
    int maxi=store[0],mini=store[0];
    int ans=0;
    for(int i=1;i<store.size();i++){
        if(store[i]<mini || store[i]>maxi) ans++;
        mini=min(mini,store[i]);
        maxi=max(maxi,store[i]);
    }
    cout<<ans;
    return 0;
}