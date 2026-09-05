#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>store;
    while(n--){
        int x;
        cin>>x;
        if(x>=1900) cout<<"Division 1\n";
        else if(x<=1899 && x>=1600) cout<<"Division 2\n";
        else if(x<=1599 && x>=1400) cout<<"Division 3\n";
        else cout<<"Division 4\n";
    }
    return 0;
}