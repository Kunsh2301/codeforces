#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>rounds;
    unordered_map<string,int>store;
    while(n--){
        string s;
        int score;
        cin>>s>>score;
       rounds.push_back({s,score});
       store[s]+=score;
    }
    int maxscore=INT_MIN;
    for(auto& x:store) maxscore=max(maxscore,x.second);
    unordered_map<string,int>curr;
    for(auto& x:rounds){
        curr[x.first]+=x.second;
        if(curr[x.first]>=maxscore && store[x.first]==maxscore){
            cout<<x.first;
            return 0;
        }
    }
}
