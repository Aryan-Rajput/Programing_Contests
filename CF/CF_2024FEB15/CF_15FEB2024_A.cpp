#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second


#define ____ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=0;
    for(int i=1;i<n;i++){
        ans+=a[i]-a[i-1];
    }
    cout<<ans<<"\n";

}

signed main() {____
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}