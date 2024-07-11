#include<bits/stdc++.h>
using namespace std;

int isVowel(char ch){ 
    string str = "aeiouyAEIOUY"; 
    return (str.find(ch) != string::npos); 
} 

int main(){
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(!isVowel(s[i])){
            ans+='.';
            ans+= tolower(s[i]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}