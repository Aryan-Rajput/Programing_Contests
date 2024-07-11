#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3==0){
        cout<<0<<"\n";
        // cout<<"-------------------------------------------\n\n";
        return;
    }
    else if((sum+1)%3==0){
        cout<<1<<"\n";
        // cout<<"-------------------------------------------\n\n";
        return;
    }
    for(int i=0;i<n;i++){
        sum=sum-a[i];
        if(sum%3==0){
            cout<<1<<"\n";
            // cout<<"-------------------------------------------\n\n";

            return;
        }
        sum+=a[i];
    }
    cout<<2<<"\n";
    // cout<<"-------------------------------------------\n\n";

}


int main() {
  int t;
  cin >> t;
  while(t--) {
    solve(); 
  }
}
