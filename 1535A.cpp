#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int>store={a,b,c,d};
        sort(store.begin(),store.end());
        int one=store[3],two=store[2];
        int max1=max(a,b),max2=max(c,d);
        cout<<((one==max1 && two==max2) || (one==max2 && two==max1)?"YES":"NO")<<endl;
    }
    return 0;
}