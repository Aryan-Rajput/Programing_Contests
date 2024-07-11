#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n,m;
    cin>>n>>m;
    string s1;
    string s2;
    cin>>s1>>s2;
    
    int cnt=0;
    int i=0;
    int j=0;
    char c = s1[j];
    while(i<s2.length()){
        if(c==s2[i]){
            j++;
            c = s1[j];
            cnt++;  
            i++;
        }else{
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
