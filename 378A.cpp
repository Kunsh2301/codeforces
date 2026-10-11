#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int first=0,draw=0,second=0;
    for(int i=1;i<=6;i++){
        if(abs(i-a)<abs(i-b)) first++;
        else if(abs(i-a)>abs(i-b)) second++;
        else draw++;
    }
    cout<<first<<" "<<draw<<" "<<second;
    return 0;
}