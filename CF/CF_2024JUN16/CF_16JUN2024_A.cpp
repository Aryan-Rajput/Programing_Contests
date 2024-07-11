#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve() {
    int n;
    cin>>n;
    ll a[n];
    ll mxval=0;
    for(int i=0;i<n;i++){
        cin>>a[i];        
        if(i<n-1){
            mxval = max(mxval,a[i]);
        }
    }
    cout<<mxval+a[n-1]<<"\n";
}

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        solve();    
    }
    
    return 0;
}
