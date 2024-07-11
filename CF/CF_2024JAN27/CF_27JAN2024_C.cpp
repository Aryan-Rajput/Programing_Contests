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
    
    int n,k,m;
    cin>>n>>k>>m;
    string check;
    cin>>check;

    map<int,int> checker;
    for(int i=0;i<check.length();i++){
        checker[check[i]]++;
    }

    bool tr = true;
    string ans = "";
    char val = 'a';
    for(int i=0;i<k;i++){
        if(checker[val+i] < n){
            tr = false;
            for(int j=0;j<n;j++){
                ans+=(val+i);
            }
            break;
        }
    }

    if(tr == false){
        cout<<"NO"<<"\n"<<ans<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
//  aabbccabab
//  abcabcabbc
//  aabbccabab
//  ababcababcbabbbb
//  ab ac aa ba bb bc ca cb cc bb bb bb 
// 
// 
// 


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


// wrong at pretest 3