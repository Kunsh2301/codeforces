#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        unordered_map<char,int>store;
        int i=0;
        bool suck=false;
        while(i<n){
            int j=i;
            if(store.find(s[i])!=store.end()) suck=true;
            while(j<n && s[j]==s[i]) j++;
            store[s[i]]++;
            i=j;
        }
        cout<<((suck)?"NO":"YES")<<endl;
    }
    return 0;
}
