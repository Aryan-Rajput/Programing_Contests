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
    int a[n];
    for(int i=0;i<n;i++) 
        cin>>a[i];
    
    for(int i=1;i<n-1;i++){
        if(a[i-1]<=a[i+1]&&a[i]>=2*a[i-1]) 
        { 
            a[i+1]-=a[i-1]; 
            a[i]-=2*a[i-1]; 
            a[i-1]=0; 
        } 
    }
    bool c = false;
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            c = true;
    }
    if(c==true){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
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
