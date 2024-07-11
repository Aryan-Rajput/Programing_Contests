#include <bits/stdc++.h>
using namespace std;

int val(string s,int i,int j){

    if(j==s.length()-1 && i==s.length()-2) 
        return 0;
    
    if(s[i]==s[j]){
        return val(s,i+1,j+1)+2;
    }
    else{
        
    }

}

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        return val(s,0,1);
    }
}