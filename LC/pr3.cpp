

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int w;
    cin >> w;
    int p[n];
    int wt[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    // for(int i=0;i<w+1;i++){
    //     cout<<dp[i]<<" ";
    // }
    int dp[w + 1] = {0};
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j < n; j++) {
            if (wt[j] <= i) {
                dp[i] = max(dp[i], dp[i - wt[j]] + p[j]);
                // cout<<dp[i]<<" "<<i<<" "<<wt[j]<<" "<<dp[i-wt[j]]<<" "<<p[j]<<endl;
            }
        }
    }
    // for(int i=0;i<w+1;i++){
    //     cout<<dp[i]<<" ";
    // }

    cout<<dp[w]<<endl;
}