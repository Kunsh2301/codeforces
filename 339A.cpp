#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>store(4,0);
    for(char x:s){
        if(x=='1') store[1]++;
        else if(x=='2') store[2]++;
        else if(x=='3') store[3]++;
    }
    string ans="";
    for(int i=1;i<4;i++){
        while(store[i]--){
            ans+=to_string(i)+"+";
        }
    }
    ans.pop_back();
    cout<<ans;
}