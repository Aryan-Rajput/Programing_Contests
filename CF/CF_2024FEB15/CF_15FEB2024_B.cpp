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
    int n,k;
    cin>>n>>k;
    if(k<=(2*(n+(n-2)))){
        if(k%2==0){
            cout<<k/2<<"\n";
        }
        else{
            cout<<(k+1)/2<<"\n";
        }
    }
    else{
        cout<<(k-(n+(n-2)))<<"\n";
    }
}

signed main() {____
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}