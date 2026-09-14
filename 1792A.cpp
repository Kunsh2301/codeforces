#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        int i=0;
        while(i<n){
            if(i+1<n && a[i]==1 && a[i+1]==1){
                ans++;
                i+=2;
            }
            else{
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
}