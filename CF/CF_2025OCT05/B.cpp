#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n, k;
    cin >> n >> k;
    if(k==(n*n)-1 || k==(n*n)-2 || k==(n*n)-3) {
        cout << "NO" << endl;
        return;
    }
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    if(k == n*n) {
        cout << "YES" << endl;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << 'U';
            }
            cout << endl;
        }
        return;
    }
    else{
        grid[n-2][0] = 'R';
        grid[n-2][1] = 'D';
        grid[n-1][1] = 'L';
        grid[n-1][0] = 'U';
    }
    int currownum = 0;
    int curcolnum = 0;
    int step = 0;
    // cout<<k<<"  "<<((n*n)-4)<<" \n";
    int rownum_i = 0;
    int rownum_j = n;
    int colnum_i = 1;
    int colnum_j = n;
    cout<<"YES"<<endl;
    while(step < ((n*n)-4)) {



        for(int i=0;i<rownum_j;i++ ){
            if(k<=0) grid[rownum_i][i] = 'D';
            else grid[rownum_i][i] = 'U';
            k--;
            step++;
            // for(int i=0; i<n; i++) {
            //     for(int j=0; j<n; j++) {
            //         cout << grid[i][j]<<" ";
            //     }
            //     cout << endl;
            // }
            // cout<<step<<" " ;
        }

        rownum_j--;
        rownum_i++;
        // cout<<"\n";
        
        
        for(int j=colnum_i;j<n;j++){
            if(k<=0) grid[j][colnum_j-1] = 'L';
            else grid[j][colnum_j-1] = 'R';
            k--;
            step++;
            // for(int i=0; i<n; i++) {
            //     for(int j=0; j<n; j++) {
            //         cout << grid[i][j]<<" ";
            //     }
            //     cout << endl;
            // }
            // cout<<step<<" " ;.

        }

        colnum_j--;
        colnum_i++;
        // cout<<"\n";
        
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}





// wrong ans on pretest 2
// :(
// after sooo long i did a contest and got a wrong ans :(
// :(