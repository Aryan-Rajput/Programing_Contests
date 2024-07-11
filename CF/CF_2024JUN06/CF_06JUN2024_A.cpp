#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int minval=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int maxval=INT_MIN;
        maxval=max(arr[i],arr[i+1]);
        minval=min(minval,maxval);
    }
    cout<<minval-1<<"\n";

}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
