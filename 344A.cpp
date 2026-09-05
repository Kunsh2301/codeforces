#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    vector<string>store;
    while(n--){
        string s;
        cin>>s;
        store.push_back(s);
    }
    for(int i=1;i<store.size();i++){
        if(store[i][0]==store[i-1][1]) ans++;
    }
    cout<<ans;
    return 0;
}