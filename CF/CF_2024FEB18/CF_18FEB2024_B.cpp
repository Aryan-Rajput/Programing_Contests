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
    int n,m;
    cin>>n>>m;

    unsigned long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    string s;
    cin>>s;
    
    unsigned long long int pr = 1;
    for(int i=0;i<n;i++){
        pr = pr*a[i];
    }
    
    int k=0;
    int w=0;
    int l=(n-1);
    
    for(int i=0;i<s.length();i++){
        int val = pr%m;
        if(s[i]=='L'){
            pr = pr/a[k];
            k++;
        }
        else{
            pr = pr/a[l];
            l--;
        }
        cout<<val<<" ";
    }
    cout<<"\n";

}

signed main() {____
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}