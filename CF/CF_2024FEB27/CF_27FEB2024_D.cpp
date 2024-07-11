#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map<int, int> val;
    vector<int> vol;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        val[a[i]]++;
    }
    if(val.begin()->second == 1){
        std::cout<<"YES"<<"\n";
        return;
    }
    for(auto x : val){
        vol.push_back(x.first);
    }
    if(vol.size()==1){
        std::cout<<"NO"<<"\n";
        return;
    }
    bool tr = true;
    for(int i = 1; i < vol.size(); i++){
        if (vol[i] % vol[0] != 0){
            std::cout<< "YES"<<"\n";
            tr = false;
            break;
        }
    }
    if(tr){
        std::cout<<"NO"<<"\n";
    }
}


int main() {
  int t;
  cin >> t;
  while(t--) {
    solve(); 
  }
}

