#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        unordered_map<char,int>store;
        store[a[0]]++;
        store[a[1]]++;
        store[b[0]]++;
        store[b[1]]++;
        int x=store.size();
        cout<<x-1<<endl;
    }
    return 0;
}