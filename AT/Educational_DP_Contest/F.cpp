#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    string ans="";
    int n = s.length();
    int m = t.length();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(s[i-1]==t[j-1]){
                // ans+=s[i-1];
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int x = 0;
    for(int i=0;i<m;i++){
        if(dp[n][i+1]>x){
            x=dp[n][i+1];
            ans+=t[i];
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}