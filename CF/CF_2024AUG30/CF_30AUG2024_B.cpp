#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9+7;
const int INF = 1e9;

void solve(){
	int len, mex; 
	int xval = 0;
    cin>>len>>mex;
	for(int i=1;i<=len;i++){
		int x; 
        cin>>x;
		xval = max(xval, x);
	}

	while(mex--){
		char cha; 
        int be,af;
		cin>>cha>>be>>af;
		if(xval <= af && be <= xval){
			if(cha=='-'){
                xval--;
            }
			else{
                xval++;
            }
		}

		cout<<xval<<" ";
	}
	cout<<'\n';
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int tc;
  cin>>tc;
  while(tc--) {
    solve();
  }

  return 0;
}
