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
    cin >> n;
    string str;
    cin >> str;
    long long int time = 0;
    int last_digit = 0;
    for(int i = 0; i < n; i++){
        if(str[i] != '0'){
            time += str[i] - '0' + 1; 
            last_digit = i;
        }
    }
    if(str[last_digit] != '0')
        time--;
    cout << time <<" || "<< endl;
}

signed main() {____
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}