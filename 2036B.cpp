#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_map<int,vector<int>>store;
        while(k--){
            int b,c;
            cin>>b>>c;
            store[b].push_back(c);
        }
        priority_queue<int>topmost;
        for(auto& x:store){
            vector<int>&temp=x.second;
            int sum=accumulate(temp.begin(),temp.end(),0);
            topmost.push(sum);
        }
        int ans=0;
        while(n-- && !topmost.empty()){
            ans+=topmost.top();
            topmost.pop();
        }
        cout<<ans<<endl;
    }
}