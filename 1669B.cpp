#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,ans=-1;
        cin>>x;
        unordered_map<int,int> mp;
        vector<int> a(x);
        for(int i=0;i<x;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>2){
                ans=a[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}