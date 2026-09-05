#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>store;
    for(char x:s) store[x]++;
    int one=0,zero=0;
    if(store['z']>0){
        zero+=store['z'];
        store['e']-=store['z'];
        store['r']-=store['z'];
        store['o']-=store['z'];
    }
    one+=store['o'];
    for(int i=0;i<one;i++) cout<<1<<" ";
    for(int i=0;i<zero;i++) cout<<0<<" ";
}