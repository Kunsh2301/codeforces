#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int max_val = *max_element(arr, arr+n);
    long long sum = 0;
    for(int i=0;i<n;i++) sum += max_val - arr[i];
    cout<<sum<<endl;
}