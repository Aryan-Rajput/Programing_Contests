#include<bits/stdc++.h>
using namespace std;
#define MOD 1e7+9

int customfib(int n){
    if(n==0) return 0;
    if(n==1) return 2;
    return customfib(n-1)+customfib(n-2);
}
void solve(){
    int n;
    cin>>n;
    cout<<customfib(n);
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        solve();
    }
}
