#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_map<int,int> m;
    m[a]++;
    m[b]++;
    m[c]++;
    m[d]++;
    cout<<4-m.size()<<endl;
}