#include<bits/stdc++.h>
using namespace std;
long long digitsum(long long);
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(__gcd(n,digitsum(n))==1){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
long long digitsum(long long x){
    long long sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}