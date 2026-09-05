#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<b.size();i++){
            if(b[i]=='G') b[i]='B';
            if(a[i]=='G') a[i]='B';
        }
        cout<<(a==b?"YES":"NO")<<endl;
    }
    return 0;
}