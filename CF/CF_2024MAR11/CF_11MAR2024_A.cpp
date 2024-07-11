#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define rep(i,a,b) for (auto i=(a); i<(b); ++i)
#define trav(a,x) for (auto& a : x)
#define pb push_back
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int b[m];
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j]<=k){
                c++;
            }
        }
    }
    cout<<c<<endl;
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
