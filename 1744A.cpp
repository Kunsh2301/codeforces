#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        string s;
        cin>>s;
        bool found=true;
        unordered_map<int,char>store;
        for(int i=0;i<n;i++){
            if(store.find(nums[i])==store.end()) store[nums[i]]=s[i];
            else if(store[nums[i]]!=s[i]){
                found=false;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}