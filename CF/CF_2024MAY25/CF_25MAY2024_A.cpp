#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n];
    int v[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[i]=a[i];
    }
    
    sort(v,v+n);
    for(int i=0;i<n;i++){
        bool val = false;
        for(int j=0;j<n;j++){
            if(a[(i+j)%n]!=v[j]){
                val = true;
                break;
            }
        }
        if(!val){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
