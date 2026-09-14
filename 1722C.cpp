#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>first(n),second(n),third(n);
        unordered_map<string,int>mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    cin>>first[j];
                    mp[first[j]]++;
                } else if(i==1){
                    cin>>second[j];
                    mp[second[j]]++;
                } else {
                    cin>>third[j];
                    mp[third[j]]++;
                }
            }
        }
        int first_score=0,second_score=0,third_score=0;
        for(int i=0;i<n;i++){
            if(mp[first[i]]==1){
                first_score+=3;
            } else if(mp[first[i]]==2){
                first_score+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(mp[second[i]]==1){
                second_score+=3;
            } else if(mp[second[i]]==2){
                second_score+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(mp[third[i]]==1){
                third_score+=3;
            } else if(mp[third[i]]==2){
                third_score+=1;
            }
        }
        cout<<first_score<<" "<<second_score<<" "<<third_score<<"\n";
    }
}