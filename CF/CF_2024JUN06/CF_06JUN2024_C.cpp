#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &a:v) {
        cin>>a;
    }
    vector<int> val;
    int x = 1;
    int sm = 0;
    int alp;
    for(auto &a:v){
        alp = __gcd(x,a);
        alp = a/alp;
        x*=alp;
    }
    for(auto &a:v){
        sm+=x/a;
        val.push_back(x/a);
    }
    if(sm<x){
        for(auto &a:val){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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
