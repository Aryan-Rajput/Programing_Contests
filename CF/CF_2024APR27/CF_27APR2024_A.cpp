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
    int tr=0;
    int a[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto i:mp){
        if(i.se >= m)
        tr=1;
    }
    if(tr==0){
        cout<<n<<"\n";
    }
    else{
        cout<<m-1<<"\n";
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
