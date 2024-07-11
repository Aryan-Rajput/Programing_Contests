#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n; 
    cin >>n;
    long long a[n], b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n+1;i++){
        cin>>b[i];
    }
    long long x=0, mini=INT_MAX;
    long long va=b[n];
    bool tr=false;
    for(int i=0;i<n;i++){
        x+=abs(a[i]-b[i]);
        if (va>=a[i] && va<=b[i] || va>=b[i]&&va<=a[i]){
            tr=true;
        }
        mini = min(min(abs(va - a[i]),abs(b[i]-va)) ,mini);
    }
    if (tr==true){
        cout<<x+1<<endl;
    }
    else{
        cout<<x+mini+1<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
