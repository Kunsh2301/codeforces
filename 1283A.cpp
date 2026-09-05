#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=1440;
    for(int i=0;i<n;i++){
        int h,m;
        cin>>h>>m;
        cout<<total-(h*60+m)<<endl;
    }
    return 0;
}