#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,pro=1,index=-1;
        cin>>n;
        int arr[n];
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<mini){
                mini=arr[i];
                index=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=index){
                pro*=arr[i];
            }
            else {
                pro*=arr[i]+1;
            }
        }
        cout<<pro<<"\n";
    }
}