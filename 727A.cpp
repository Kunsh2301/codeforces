#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    vector<long long>store;
    store.push_back(b);
    while(b>a){
        if(b%2==0){
            store.push_back(b/2);
            b/=2;
        }
        else if((b-1)%10==0){
            store.push_back((b-1)/10);
            b=(b-1)/10;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    if(b!=a){
        cout<<"NO";
        return 0;
    }
    reverse(store.begin(),store.end());
    cout<<"YES"<<endl;
    cout<<store.size()<<endl;
    for(int x:store) cout<<x<<" ";
}