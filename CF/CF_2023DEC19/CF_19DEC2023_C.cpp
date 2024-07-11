#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        int v1 = 0;
        int v2 = 0;
        int i=0;
        while(i<n){
            if(k == i){
                break;
            }
            ans+=a[i];
            v1 = max(v1,b[i]);
            v2 = max(ans + (k-i-1)*v1,v2);
            i++;
        }
        cout<<v2<<"\n";

    }
    return 0;
}