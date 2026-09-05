#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mini=INT_MAX;
    for(int i=1;i<=100;i++){
        mini=min(mini,abs(a-i)+abs(b-i)+abs(c-i));
    }
    cout<<mini<<endl;
}