#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    // map<int,int> mp;
    int ans=0;
    int cnt3=0;
    int cnt2=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==4){
            ans++;
        }
        if(x==3){
            if(cnt1>0){
                cnt1--;
                ans++;
            }else{
                cnt3++;
            }
        }
        if(x==1){
            if(cnt3>0){
                cnt3--;
                ans++;
            }else{
                cnt1++;
            }
        }
        if(x==2){
            if(cnt2==2){
                cnt2=0;
                ans++;
            }
            cnt2++;
        }
        // mp[x]++;
    }
    if(cnt2>0){
        if(cnt1>0){
            cnt1-=2;
            cnt2--;
            ans++;
            if(cnt1>0){
                ans+=ceil(cnt1/4);
            }
        }
    }
    

    return 0;
}