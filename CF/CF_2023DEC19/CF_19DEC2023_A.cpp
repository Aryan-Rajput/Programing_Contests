#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        map<char,int> mp;
        int k=1;
        char x = 'A';
        for(int i=0;i<26;i+=1){
            mp[x]=i+1;
            x = x + 1;
            k++;
        }
        // for(auto i : mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        for(int i=0;i<n;i++){
            mp[s[i]]--;
        }
        int c=0;
        for(auto i : mp){
            if(i.second<=0){
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}