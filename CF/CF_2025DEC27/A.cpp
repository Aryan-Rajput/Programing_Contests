#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    string s;
    cin >> s;

    int cnty = 0;
    for (char c : s) {
        if (c == 'Y') cnty++;
    }

    if (cnty <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}

// too ez
