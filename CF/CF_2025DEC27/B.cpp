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
    string r;
    cin >> r;
    int n = r.size();

    vector<int> pos;
    for (int i = 0; i < n; i++) {
        if (r[i] == 's') pos.pb(i);
    }

    int ops = 0;

    for (int i = 0; i + 1 < (int)pos.size(); i++) {
        int gap = pos[i + 1] - pos[i] - 1;
        if (gap % 2 == 1) ops++;
    }

    if ((int)pos.size() < 2) {
        ops += (2 - pos.size());
    }

    cout << ops << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


// went straight to c
// could have done better
// ohh well anyways