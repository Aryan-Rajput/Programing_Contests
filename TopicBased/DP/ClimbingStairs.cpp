
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define debug(x) cout << #x << " = " << x << endl

const int MOD = 1e9 + 7;
const int INF = 1e9;

int solve() {

    int n;
    cin>>n;
    // vector<int> dp(n + 1, -1);
    int a = 1;
    int b = 1;
    int res=0;
    // cout<<func(n);
    for(int i=2;i<=n;i++){
        res = a+b;
        a = b;
        b = res;
    }
    // cout<<dp[n];
    return res;
    // cout<<func(n,dp);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        cout<<solve();
    }
    
    return 0;
}
