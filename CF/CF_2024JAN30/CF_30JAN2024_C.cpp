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
    ll a,b,c;
    cin>>a>>b>>c;
    if (a<b) {
        ll int temp = a;
        a=b;
        b=temp;
    }
    long long int val=a-b;
    long long int x=val;
    long long int idxc=0;
    for (int i=60;i>=0; i--){
        if((idxc+((ll)1<<i) <= c) && ((b>>i)&1)==0&&((a>>i)&1)==1){
            if(val>=2*((ll)1<<i)){
                idxc = idxc + ((ll)1<<i);
                val = val - (2*((ll)1<<i));
            } 
            else {
                if(x < 2*((ll)1<<i)-val){
                    x = 2*((ll)1<<i)-val;
                }
            }
        }
    }
    if(val<x){
        val = x;
    }
    cout<<val<<"\n";
    
    return;
}

signed main() {____
  int t;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}


// no time left to solve :(