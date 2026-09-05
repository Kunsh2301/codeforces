#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=INT_MAX,val1=-1,val2=-1;
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<mini){
            mini=abs(a[i]-a[i-1]);
            val1=i;
            val2=i-1;
        }
    }
    if(abs(a[0]-a[n-1])<mini){
        val1=0;
        val2=n-1;
    }
    cout<<val1+1<<" "<<val2+1<<endl;
}