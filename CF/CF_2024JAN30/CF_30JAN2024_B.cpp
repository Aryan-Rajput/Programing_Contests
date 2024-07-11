#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#define __ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    int sm=0;
    int a[n],b[n];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        v.push_back(mp(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(auto i : v){
        cout<<i.fi<<" ";
    }
    cout<<"\n";
    for(auto i : v){
        cout<<i.se<<" ";
    }
    cout<<"\n";
    
    return;
}

int main() {__
  
  int t;
  cin >> t;
  
  while(t--) {
    solve();
  }

  return 0;
}
