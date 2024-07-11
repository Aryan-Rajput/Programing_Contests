#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    string vx[n];
    int val1 = -1, finval = 0, val2 = m+1;
    for(int i=0;i<n;i++){
        cin>>vx[i];
        vx[i] += '.';
    }
    int dext = -1;
    for(string i : vx){
        int f=0;
        int ept=0;
        for(int j=0;j<=m;j++){
            if(i[j]=='#'){
                ept++;
                if(f==0){
                    f=1;
                    val2 = min(j,val2);
                }
            } 
            else if(f == 1){
                val1 = max(j-1,val1);
                f=0;
            }
        }
        finval = max(finval,ept);
    }
    for (int i=0;i<n;i++){
        int f = 0;
        int ept = 0;
        for (int j=0;j<=m;j++){
            if(vx[i][j]=='#'){
                ept++;
                if(ept==finval){
                    dext = i;
                    break; 
                }
            }
        }
    }
    cout<<dext+1<<" "<<(int)((val2+1+val1+1)/2)<<"\n\n";
}

int main() {
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}