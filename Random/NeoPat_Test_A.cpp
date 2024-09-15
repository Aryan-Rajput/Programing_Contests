

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    int tr =0;
    cin>>tr;

    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int dif=INT_MAX;
    int tripsum=0;
    for(int i=0;i<n-2;i++){
        for(int j=1;j<n-1;j++){
            for(int k=2;k<n;k++){
                tripsum=a[i]+a[j]+a[k];
                if(abs(tripsum-tr)<dif){
                    dif=abs(tripsum-tr);
                }
            }   
        }
    }
    cout<<tripsum<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;  
    while(t--) {
        solve();
    }
    
    return 0;
}
