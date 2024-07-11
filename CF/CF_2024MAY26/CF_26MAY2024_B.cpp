#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int val =0;
    vector<int> v;
    int a=n;
    while(a>0){
        if(a&1) v.push_back(1);
        else v.push_back(0);
        a=a>>1;
    }
    for(int i=0;i<v.size()-1;i++){
        
        if(v[i]==1 && v[i+1]==1){
            v[i]=-1;
            int j = i+1;
            while(j<v.size() && v[j]==1){
                v[j]=0;
                j++;
            }
            if(j==v.size()){
                v.push_back(1);
            }else{
                v[j]=1;
            }
            i = j-1;
        }
    }
    // v.resize(6);
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
