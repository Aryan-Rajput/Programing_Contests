#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"No"<<endl;
        return;
    }
    if(n>m){
        if((n-m)%2==0){
            cout<<"Yes\n";
            return;
        }
        else{
            cout<<"No\n";
            return;
        }
    }
    if(n==m){
        cout<<"Yes\n";
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
