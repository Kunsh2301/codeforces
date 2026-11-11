#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,ans=a;
    cin>>a;
    while(1){
        int newnum=a,sum=0;
        while(newnum){
            sum+=newnum%10;
            newnum/=10;
        }
        if(sum%4==0){
            cout<<a<<endl;
            return 0;
        }
        a++;
    }
    return 0;
}