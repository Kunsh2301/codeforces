#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        bool valid=false,allpositive=true;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==-1) allpositive=false;
            sum+=nums[i];
            if(i>0 && nums[i]==-1 && nums[i-1]==-1) valid=true;
        } 
        if(valid) sum+=4;
        else if(allpositive) sum-=4;
        cout<<sum<<endl;
    }
    return 0;
}