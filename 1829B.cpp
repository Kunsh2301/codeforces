#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int curr=0,maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                curr++;
                maxi=max(curr,maxi);
            }
            else curr=0;
        }
        cout<<maxi<<"\n";
    }
    return 0;
}