#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=abs(a[i]);
    }
    cout<<sum<<"\n";
}


int main() {
  int t;
  cin >> t;
  while(t--) {
    solve(); 
  }
}
