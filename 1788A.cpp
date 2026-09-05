#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long totaltwo=0;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==2) totaltwo++;
        }
        if(totaltwo%2){
            cout<<-1<<endl;
            continue;
        }
        int need=totaltwo/2;
        int curr=0;
        bool found=false;
        for(int i=0;i<n-1;i++){
            if(nums[i]==2) curr++;
            if(curr==need){
                found=true;
                cout<<i+1<<endl;
                break;
            }
        }
        if(!found) cout<<-1<<endl;
    }
}