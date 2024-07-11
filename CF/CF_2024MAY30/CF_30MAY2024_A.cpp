#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    bool isValid = true;
    int i = 0;

    while (i < s.length() && isdigit(s[i])){
        if (i > 0 && s[i] < s[i - 1]){
            isValid = false;
            break;
        }
        i++;
    }

    int prevChar = -1;
    while (i < s.length()){
        if (isdigit(s[i])){
            isValid = false;
            break;
        }
        if (prevChar != -1 && s[i] < prevChar){
            isValid = false;
            break;
        }
        prevChar = s[i];
        i++;
    }

    cout << (isValid ? "YES" : "NO") << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
