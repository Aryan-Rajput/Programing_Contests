#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    string b;
    cin>>s>>b;
    string c = s.substr(0,1) + b.substr(1, 2);
    string d = b.substr(0,1) + s.substr(1, 2);
    cout<<d<<" "<<c<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}