#include<bits/stdc++.h>
using namespace std;
bool isvalid(vector<int>& cities, vector<int>& tower, int med){
    int i=0,j=0;
    int n=cities.size();
    while(i<n){
        if(j==tower.size()) return false;
        long long left=1LL*(tower[j]-med);
        long long right=1LL*(tower[j]+med);
        if(cities[i] < left) return false;
        if(cities[i] > right){
            j++;
        }
        else i++;
    }
    return true;
}
int findRadius(vector<int>& cities, vector<int>& tower) {
    int low=0,high=2e9;
    int ans=high;
    sort(cities.begin(),cities.end());
    sort(tower.begin(),tower.end());
    while(low<=high){
        int med=low+(high-low)/2;
        if(isvalid(cities,tower,med)){
            ans=med;
            high=med-1;
        }
        else low=med+1;
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> cities(n),tower(m);
    for(int i=0;i<n;i++) cin>>cities[i];
    for(int i=0;i<m;i++) cin>>tower[i];
    cout<<findRadius(cities,tower);
}