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
    string str;
    cin>>str;
    int cnt=0;
    int i=0;
    while(i<n){
        if(str[i]=='m' && str[i+1]=='a' && str[i+2]=='p'){
            cnt++;
            i+=3;
        }
        else if(str[i]=='p' && str[i+1]=='i' && str[i+2]=='e'){
            cnt++;
            i+=3;
        }
        else{
            i++;
        } 
      }
    cout<<cnt<<"\n";
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
