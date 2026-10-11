#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>ans;
    unordered_map<int,int>store;
    for(int i=0;i<n;i++){
        if(store.find(nums[i])==store.end()){
            ans.push_back(i);
            store[nums[i]]=1;
        }
    }
    if(ans.size()<k){
        cout<<"NO"<<endl;
    }
    else{
        int temp=0;
        cout<<"YES"<<endl;
        for(int& x:ans){
            cout<<x+1<<" ";
            temp++;
            if(temp==k) break;
        }
    }
    return 0;
}