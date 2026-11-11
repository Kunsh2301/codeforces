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
        bool is_false=true;
        unordered_map<int,int>store;
        store[nums[0]]++;
        for(int i=1;i<n;i++){
            if(store.find(nums[i]-1)==store.end() && store.find(nums[i]+1)==store.end()) is_false=false;
            store[nums[i]]++;
        }
        cout<<(is_false?"YES":"NO")<<endl;
    }
    return 0;
}