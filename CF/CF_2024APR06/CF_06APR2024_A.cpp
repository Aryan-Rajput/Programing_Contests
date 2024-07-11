#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cadj=0;
    int c=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='1'){
            cadj++;
            return;
        }
        if(s[i]=='1'){
            c++;
        }
    }
    if(s[s.length()-1] == '1'){
        c++;
    }
    
    if(c%2!=0 || (c-cadj)%2==0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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
