#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

void solve() {
    ll valx, dex;
    cin >> valx >> dex;
    vector<ll> xval;
    ll sum = 0;
    for(ll i=1;i<=valx;i++){
        sum += abs(i - (valx - i + 1));  
        xval.push_back(i);
    }
 
    if(!(dex%2==1||sum<dex)){
        cout <<"yES\n";
        ll ind = 0,xin = valx;
        while (dex > (xin-1)*2) {
            swap(xval[valx-ind-1], xval[ind]);  
            dex -= (xin-1)*2;  
            xin -= 2;
            ind++;
        }
        dex/=2;
        swap(xval[ind], xval[ind + dex]);  
        for(auto i=0;i<xval.size();i++){
            cout<<xval[i]<<" ";
        }
        cout<<"\n";
    } 
    else{
        cout<<"nO\n";
    }
}

int main() {
    ll t;
    cin>>t;
    
    while (t--) {
        solve();    
    }
    
    return 0;
}
