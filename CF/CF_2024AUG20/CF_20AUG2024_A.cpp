#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int x;
    cin>>x;

    int a[x];
    for (int i = 0; i < x; i++) {
        cin>>a[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < x; i++) {
        m[a[i]]++;
    }
    int val=0;
    int xval=0;
    for (auto it = m.begin(); it!= m.end(); it++) {
        if(it->S>val){
            val=it->S;
            // xval=it->F;
        }
        // cout<<it->F<<" "<<it->S<<"\n";
    }
    cout<<x-val<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
