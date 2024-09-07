#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
	int n,a,b;
    cin>>n>>a>>b;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int val = __gcd(a,b);
    sort(v.begin(),v.end());
    // int val1 = v[0];
    // int val2 = v[n-1];
    // if((val2-val1)%val == 0){
    //     cout<<0<<'\n';
    //     return;
    // }
    // cout<<min(abs(a-b),abs(val2-val1))<<'\n';
    for(int i=0;i<n;i++){
        v[i] = v[i]%val;
    }
    
    // if(a<b){
    //     swap(a,b);
    // }

    sort(v.begin(),v.end());
    int retval = v[n-1] - v[0];
    for(int i=0;i<n-1;i++){
        retval = min(retval,v[i] + val -v[i+1]);    
    }

    // int max_val = INT_MIN;
    // int min_val = INT_MAX;

    // map<int,int> mp;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     mp[i] = x;
    //     max_val = max(max_val,x);
    //     min_val = min(min_val,x);
    // }
    // // for(auto i : mp){
    // //     cout<<i.fi<<" "<<i.se<<'\n';
    // // }


    // multimap<int,int> mx;
    // for(auto i : mp){
    //     mx.insert(make_pair(i.se,i.fi));
    // }
    // for(auto i : mx){
    //     cout<<i.fi<<" "<<i.se<<'\n';
    // }
    // cout<<"\n\n";
    // int repeted_val = 0;
    // // while(repeted_val != 2){
    //     auto it = mx.begin();
    //     auto it2 = mx.end();
    //     int val1 = it->fi;
    //     int val2 = it2->fi;
    //     int minimized_val = (val2-val1);
    //     auto range = mx.equal_range(val1);
    //     for(auto i = range.first; i != range.second; ++i){
    //         i->fi = val1+a;
    //     }
    //     for(auto i : mx){
    //         cout<<i.fi<<" "<<i.se<<'\n';
    //     }

    // // }
    cout<<retval<<'\n';
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
