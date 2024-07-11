#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    long long sum = 0;
    long long indexes = n - x;
    for (long long i = 0; i < n; i++) {
        if (i < indexes)
            sum += a[i];
        else
            sum -= a[i];
    }
    long long ans = sum;
    for (long long i = n - 1; i >= n - k; i--) {
        if (i >= indexes) {
            sum += a[i];
            if (indexes - 1 >= 0)
                sum -= 2 * a[indexes - 1];
            indexes--;
            ans = max(sum, ans);
        }
    }
    cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int tc;
  cin >> tc;
  while(tc--) {
    solve();
  }

  return 0;
}
