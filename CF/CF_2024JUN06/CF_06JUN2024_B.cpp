#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


void solve(){
    ull x,y;
    cin>>x>>y;
    // ull maxLen = 0;
    ull k = x ^ y;
    ull lc = 1;
    while(k%2==0){
        lc<<=1;
        k>>=1;
    }
    cout<<lc<<endl;

}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
