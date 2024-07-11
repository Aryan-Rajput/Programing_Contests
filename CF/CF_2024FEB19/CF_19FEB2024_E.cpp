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
    int n,k;
    cin>>n>>k;
    int v = 1;
    bool tr = true;
    while (tr) {
        int val = (n/2 + (n&1));
        if(val >= k){
            cout<<(2*k - 1)*v<<"\n";
            break;
        } 
        else{
            k -= val;
            v *= 2;
            n /= 2;
        }
    }
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
