
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    int n;
    cin >> n;
    if(n%2==0){
        cout<<"Sakurako\n";
    }
    else{
        cout<<"Kosuke\n";
    }

    // cout<<n%2==0?"Sakurako":"Kosuke";
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

// too ez
