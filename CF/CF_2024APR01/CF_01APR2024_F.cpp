#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;
const ll LINF = 1e18;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int tc;
  cin >> tc;
  int sm=0;
  while(tc--) {
    string s;
    cin>>s;
    int c1=0;
    int c0=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            c1++;
        }if(s[i]=='0'){
            c0++;
        }
    }
    if(c1>c0){
        sm++;   
    }
  }

  return 0;
}
