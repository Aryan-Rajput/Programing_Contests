#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
const int MOD = 1e9+7;
const int N = 2e5+5;

void solve() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ctr=0;
    for(int i=0;i<n;i++){
        int myval=0;
        for(int j=0;i+j<n;j++){
            myval=max(myval,abs(a[i+j][j]));
        }
        ctr += myval;
    }
    for(int i=1;i<n;i++){
        int myval=0;
        for(int j=0;i+j<n;j++){
            myval=max(myval,abs(a[j][i+j]));
        }
        ctr += myval;
    }
    cout<<" << "<<ctr<<" >> "<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
