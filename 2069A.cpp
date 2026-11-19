#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n-2);
        for(int i=0;i<n-2;i++){
            cin>>nums[i];
        }
        bool possible=true;
        for(int i=0;i<n-4;i++){
            if(nums[i]==1 && nums[i+1]==0 && nums[i+2]==1){
                possible=false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<endl;
    }
    return 0;
}