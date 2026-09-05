#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){   
        cin>>a[i];
    }
    int i=0,j=n-1;
    int sereja=0,dima=0;
    int count=1;
    while(i<=j){
        if(count%2!=0){
            if(a[i]>a[j]){
                sereja+=a[i];
                i++;
            }
            else{
                sereja+=a[j];
                j--;
            }
        }
        else{
            if(a[i]>a[j]){
                dima+=a[i];
                i++;
            }
            else{
                dima+=a[j];
                j--;
            }
        }
        count++;
    }
    cout<<sereja<<" "<<dima<<endl;
}