#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        unordered_map<int,int>store;
        for(int i=0;i<n;i++) store[nums[i]]++;
        for(auto& x:store){
            ans+=(x.second)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}