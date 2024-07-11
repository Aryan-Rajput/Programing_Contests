#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string a[n];
    int count1s=0;
    bool tr = false;
    bool tr2 = false;
    bool tr3 = true;
    for(int i=0;i<n;i++){
        int c=0;
        cin>>a[i];
        for(int j=0;j<a[i].length();j++){
            if(a[i][j]=='1'){
                c++;
                tr = true;
            }
        }
        
        if((c==count1s ||(c==0 && count1s==1) ) && tr2 == true && tr3 == true){
            cout<<"SQUARE\n";
            tr3 = false;
        }
        else if((c<count1s || c>count1s ) && tr2 == true && tr3 == true){
            cout<<"TRIANGLE\n";
            tr3 = false;
            
        }



        if(tr == true){
            count1s = c;
            tr2 = true;

        }

    }

}


int main() {
  int t;
  cin >> t;
  while(t--) {
    solve(); 
  }
}
