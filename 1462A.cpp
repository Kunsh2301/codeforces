#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int i=0,j=n-1;
        while(i<=j){
            cout<<a[i]<<" ";
            if(i!=j) cout<<a[j]<<" ";
            i++;
            j--;
        }
        cout<<endl;
    }
}