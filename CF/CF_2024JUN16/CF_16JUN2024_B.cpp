#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    ll pre=0,post=0,exp=0;
    ll val = 0;
    if(a<=b){
        exp = min(n, b - a);
        post = n - exp;
        pre = b - exp;
        val = (b*(b+1)/2) - (pre*(pre+1)/2) + post*a;
        cout<<val<<"\n";

    }else{
        cout<<a*n<<"\n";
        return;
    }
    
    
}

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        solve();    
    }
    
    return 0;
}
