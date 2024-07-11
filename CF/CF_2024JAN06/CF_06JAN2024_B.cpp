#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                c1++;
            }
            else if(s[i]=='-'){
                c2++;
            }
        }
        cout<<abs(c1-c2)<<"\n";
    }
    return 0;
}