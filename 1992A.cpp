#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        for(int i=0;i<5;i++){
            int x=pq.top();
            pq.pop();
            pq.push(x+1);
        }
        int ans=1;
        while(!pq.empty()){
            ans*=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
}