#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        int i=0;
        int c1=0;
        int c2=0;
        while(i<=s.length()){
            if(s[i]=='A'){
                c1++;
            }else{
                c2++;
            }
        }
        if(c1>c2){
            cout<<"A";
        }else{
            cout<<"B";
        }
        t--;
    }
    return 0;
}