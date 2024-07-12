#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int, int> m;
    int ml=0;
    int x=0,y=0;
    int curr=0;

    for(int i=0;i<n;i++){
        if(m.count(a[i])){
            curr=max(curr, m[a[i]]+1);
        }
        m[a[i]]=i;
        if(i-curr+1>ml){
            ml=i-curr+1;
            x=curr;
            y=i;
        }

    }
    vector<int> ans;
    for(int i=x;i<=y;++i){
        ans.pb(a[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
        

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


// didint work 