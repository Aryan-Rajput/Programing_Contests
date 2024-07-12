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
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=-1;
    }
    // vector<int> a(n);
    if(n%2==0){
        cout<<-1<<"\n";
    }
    else{
        int r=n-1;
        int l=0;
        for(int i=1;i<=n;i++){
            if(i%2!=1){
                a[r--]=i;
            }
            else{
                a[l++]=i;
                // break;
            }
            
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
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
