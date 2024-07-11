#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a,a+n);
    int cnt=0;
    int x = a[(n/2)];
    // cout<<a[x]<<"\n";
    int y = (n%2==0)? (n/2)-1 : (n/2);
    for(int i=y;i<n;i++){
        if(a[i]==x){
            cnt++;
        }
    }
    cout<<(cnt)<<"\n";
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
