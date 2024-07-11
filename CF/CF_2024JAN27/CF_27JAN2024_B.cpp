#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, n;
  cin >> x >> n;
  
  int ans = 1;
  
  for(int i=1; i<n; i++) {
    if(x%i == 0) {
      int k1 = i; 
      int k2 = x/i;
      
      int gcd = __gcd(k1, k2);
      ans = max(ans, gcd);
    }
  }
  
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve(); 
  }
}

// couldnt solve it :( 