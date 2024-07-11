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
    int n;
    cin>>n;
    ll int minrange = -LINF;
    ll int maxrange = LINF;
    set<ll int> st;
    for(int i=0;i<n;i++){
        ll int a,b;
        cin>>a>>b;
        if(a==1){
            if(b>=minrange) minrange = b;
        }
        if(a==2){
            if(b<=maxrange) maxrange = b;
        }
        if(a==3){
            st.insert(b);
        }
    }
    int c=0;
    if(maxrange<minrange){
        cout<<0<<endl;
        return;
    }
    // cout<<minrange<<" "<<maxrange<<endl;
    for(auto i : st){
        if(i>=minrange && i<=maxrange) c++;
        // c++;
    }
    cout<<maxrange-minrange+1-c<<endl;
    return;
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
