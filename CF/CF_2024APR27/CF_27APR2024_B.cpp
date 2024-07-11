#include <bits/stdc++.h>
using namespace std;

// #define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve() {
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int cx=0;   
    int cy=0;
    bool tri = true;
    char charval1,charval2;
    char lu = '0';
    char ru = '0';
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='W'){
                cy++;
            }else{
                cx++;
            }

        }
        if(tri==true){
            charval1 = a[i][0];
            charval2 = a[i][m-1];
            tri = false;
        }else{
            if(a[i][0]==charval2){
                lu = charval2;
            }
            if(a[i][m-1]==charval1){
                ru = charval1;
            }
        }
    }
    
    charval1 = a[n-1][0];
    charval2 = a[n-1][m-1];
    char ld = '0';
    char rd = '0';
    for(int i=n-2;i>=0;i--){
        if(a[i][0]==charval2){
            ld = charval2;
        }
        if(a[i][m-1]==charval1){
            rd = charval1;
        }
    }
    charval1 = a[0][0];
    charval2 = a[n-1][0];
    char ll = '0';
    char rl = '0';
    for(int j=1;j<m;j++){
        if(a[0][j]==charval2){
            ll = charval2;
        }
        if(a[n-1][j]==charval1){
            rl = charval1;
        }
    }
    charval1 = a[0][m-1];
    charval2 = a[n-1][m-1];
    char lr = '0';
    char rr = '0';
    for(int j=m-2;j>=0;j--){
        if(a[0][j]==charval2){
            lr = charval2;
        }
        if(a[n-1][j]==charval1){
            rr = charval1;
        }
    }
    if(cy==0 || cx==0){
        cout<<"YES\n";
        return;
    }
    if((a[0][0]==a[n-1][m-1] || a[n-1][0]==a[0][m-1])  ||
       (lu==a[n-1][m-1] || ru==a[n-1][0])    ||
       (ld==a[0][m-1] || rd==a[0][0])    ||
       (ll==a[0][m-1] || rl==a[n-1][m-1])||
       (lr==a[n-1][0]  || rr==a[0][0])  ){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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
