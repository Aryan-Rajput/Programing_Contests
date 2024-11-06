
#include <bits/stdc++.h>
using namespace std;
int c=0;
int cn=0;

int main() {
    string p1="",p2="";
    cin>>p1>>p2;
    map<char,int>mp;
    // map<char,int>mp2;
    for(int i=0;i<p1.size();i++){
        mp[p1[i]]++;
    }
    for(int i=0;i<p2.length();i++){
        if(p1[i]==p2[i]){
            c++;
        }
        else if(mp.count(p2[i])){
            cn++;
        }
    }
    string ans ="";
    // ans+=to_string(c);
    ans += c + '0';
    ans+="G";
    // ans+=to_string(cn);
    ans += cn + '0';
    ans+="S";
    cout<<ans;
    // for(int i=0;i<p2.size();i++){
    //     mp[p2[i]]
    // }
    
    return 0;
}
