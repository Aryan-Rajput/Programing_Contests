#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n+m+1];
    int b[n+m+1];
    long long vol1 = 0,vol2 = 0;
    for(int i=0;i<=n+m;i++){
        cin>>a[i];
        vol1+=a[i];
    }
    for(int i=0;i<=n+m;i++){
        cin>>b[i];
        vol2+=b[i];
    }
    // vector<pair<int,int>> p;
    map<float,pair<int,int>> mp1;
    map<float,pair<int,int>> mp2;
    
    for(int i=0;i<=n+m;i++){
        mp1[(float)a[i]/(float)b[i]] = {a[i],b[i]};
        mp2[(float)b[i]/(float)a[i]] = {b[i],a[i]};
        // p.push_back({a[i],b[i]});
    }
    vector<int>res;
    // if(m>n){

    // }
    // for(int i=0;i<=n+m;i++){
    //     for(int j=i;j<)
    // }

    // vector<long long > v1(n+m+1,0),v2(n+m+1,0);;
    // for(int i=0;i<=n+m;i++){
    //     v1[i]=(vol1-a[i]);
    //     v2[i]=(vol2-b[i]);
    // }
    // vector<int> val1,val2;
    // for(int i=0;i<n+m+1;i++){
    //     if(val1.size()<n){
    //         if(val2.size()<m){
    //             if(a[i]>b[i]){
    //                 val1.push_back(i);
    //             }
    //             else{
    //                 val2.push_back(i);
    //             }

    //         }
    //         else{
    //             val1.push_back(i);
    //         }

    //     }
    //     else{
    //         val2.push_back(i);
    //     }
    // }
    // long long r1,r2;
    // for(auto i : val1){
    //     r1++;
    // }
    
    // for(auto i : val2){
    //     r2++;
    // }
    // vector<long long >res(n+m+1,0);
    // for(int i=0;i<n+m+1;i++){
    //     if(find.val)
    // }

}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
