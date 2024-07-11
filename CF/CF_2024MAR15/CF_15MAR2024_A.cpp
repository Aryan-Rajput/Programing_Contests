#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "";
        if(n%2==0){
            while(n>0){
                s+="AAB";
                n-=2;
            }
            cout<<"YES\n"<<s<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}


// not submitting teh qustion today was helpin kannu :)
