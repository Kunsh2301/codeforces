#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        unordered_map<int,pair<int,int>> mp;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            mp[arr[j]].first++;
            mp[arr[j]].second = j;
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second.first==1){
                ans=(it->second.second)+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}