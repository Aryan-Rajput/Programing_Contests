#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.size()==1){
        cout<<s<<"\n";
        return;
    }
    int c = 0;
    string tmp = "";
    string ans = "";
    map<char, char> mp;
    set<char> st;
    for (auto i : s)
    {
        st.insert(i);
    }
    int idx = 0;
    for (auto it = st.begin(); it != st.end() && idx < st.size() / 2; it++, idx++)
    {
        mp[*it] = *next(st.rbegin(), idx);
    }
    for(auto i : mp){
        mp[i.second] = i.first;
    }
    // for(auto i : mp){
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    for(int i=0;i<s.size();i++){
        ans = ans + mp[s[i]];
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}