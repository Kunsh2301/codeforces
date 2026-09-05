#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int> v;
    while(n>3){
        n-=2;
        v.push_back(2);
        ans++;
    }
    if(n==3) v.push_back(3);
    else v.push_back(2); 
    cout<<ans+1<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}