#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        vector<long long>prefix(n+1,0);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            prefix[i+1]=prefix[i]+nums[i];
        }
        string s;
        cin>>s;
        long long sum=0;
        int i=0,j=n-1;
        while(i<j){
            while(i<j && s[i]!='L') i++;
            while(i<j && s[j]!='R') j--;
            if(i<j){
                sum+=prefix[j+1]-prefix[i];
                i++;
                j--;
            }
        }   
        cout<<sum<<endl;
    }
}