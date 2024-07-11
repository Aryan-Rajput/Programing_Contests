#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve() {
    pair<ll,ll>v;
    cin>>v.fi>>v.se;
    vector<int> c(v.fi);
    for (int j=0;j<v.fi;j++) {
        cin>>c[j];
    }
    int p=0;
    vector<int> d = c;
    d[0] += v.se;
    int y = *max_element(c.begin(), c.end());
    int z = distance(d.begin(), max_element(d.begin(), d.end()));

    for (int i = 0; i < c.size(); ++i) {
        if (i == z) {
            cout << 0 << " ";
            p += c[i];
            continue;
        }
        if (c[i] + p + v.se >= y) {
            cout << i << " ";
        } else {
            cout << i + 1 << " ";
        }
        p += c[i];
    }
    cout << endl;
}

int main() {
    ll t;
    cin>>t;
    
    while (t--) {
        solve();    
    }
    
    return 0;
}
