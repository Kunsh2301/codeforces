#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int>copy(nums.begin(),nums.end());
        sort(copy.begin(),copy.end());
        bool found=true;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=copy[i]%2){
                found=false;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}