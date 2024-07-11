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
    int a[n];
    map<int,int> mp;
    mp[0]++;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.size()%2==0){
        for(int i=2;i<=mp.size()-1;i+=2){
            if(mp[i]-mp[i-1]>1){
                cout<<"Alice\n";
                return;
            }
        }
        cout<<"Bob\n";
    }else{
        for(int i=1;i<mp.size()-1;i+=2){
            if(mp[i]-mp[i-1]>1){
                cout<<"Bob\n";
                return;
            }
        }
        cout<<"Alice\n";
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



// couldnt do this :,< 