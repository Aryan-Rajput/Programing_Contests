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
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll cur = a[0];
    ll ans = 0;

    for (int i = 1; i < n; i++) {
        if (cur >= a[i]) {
            
            ans -= a[i];
        } else {
            ans += cur;
            cur = a[i];
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}


// could not solve during contest
// greedy approach
// keep track of current max
// if next element is smaller, add it to answer as loss
// else add current max to answer as profit and update current max
// rest idk
