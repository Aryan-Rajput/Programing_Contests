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
    cin >> n; 
    vector<long long int>arr; 
    vector<int> val(n - 1); 
    for (int i = 0; i < n - 1; i++) { 
        cin >> val[i]; 
    } 
    arr.push_back(1e8); 
    int i = 0,j = 0; 
    while(i < n - 1) { 
        arr.push_back(arr.back() + val[i]); 
        i++; 
    } 
    for(auto i : arr){
        cout<<i<<" "; 
    }
    cout << endl; 

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
