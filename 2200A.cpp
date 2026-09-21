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
        unordered_set<int>ans;
        for(int i=0;i<n;i++){
            int empty=0,j=i;
            vector<int>temp=nums;
            while(empty!=n){
                if(temp[j]>0){
                    temp[j]--;
                    if(temp[j]==0){
                        empty++;
                    }
                    if(empty==n){
                        ans.insert(j);
                    }
                }
                j=(j+1)%n;
            }
        }
        cout<<ans.size()<<endl;
    }
}