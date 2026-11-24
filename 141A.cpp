#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b,c;
    cin>>a>>b>>c;
    unordered_map<char,int>store;
    for(char& x:a) store[x]++;
    for(char& x:b) store[x]++;
    bool found=true;
    for(char& x:c){
        if(store.find(x)==store.end()) found=false;
        else store[x]--;
    }
    for(auto& x:store) if(x.second<0 || x.second>0) found=false;
    cout<<((found)?"YES":"NO");
    return 0;
}
