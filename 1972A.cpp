#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int i=0,j=0,ans=0;
        while(j<n){
            if(a[i]<=b[j]){
                i++;
                j++;
            }
            else{
                ans++;
                j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}