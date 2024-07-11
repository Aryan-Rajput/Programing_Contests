#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> x;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    sort(x.begin(),x.end());
    if(x[0]+x[1]<x[2]){
        cout<<x[0]+x[1]<<"\n";
    }
    else if(x[0]+x[1]>x[2]){
        cout<<x[2]<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
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



// not doing anything anymore today im too sleepy :,<