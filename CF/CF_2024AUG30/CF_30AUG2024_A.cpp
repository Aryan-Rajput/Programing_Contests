#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
	int ixval, exval;
    cin>>ixval>>exval;
	if(ixval%2==0){
        ixval++;
    }
    int res = (exval-ixval+2)/4;
	cout<<res<<'\n';
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
