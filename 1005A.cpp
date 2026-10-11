#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int index=0,diff=0;
    vector<int>store;
    while(index<n){
        if(nums[index]==1){
            diff++;
            int temp=1;
            while(index<n && nums[index+1]==nums[index]+1){
                index++;
                temp++;
            }
            store.push_back(temp);
        }
        index++;
    }
    cout<<diff<<endl;
    for(int x:store) cout<<x<<" ";
    return 0;
}