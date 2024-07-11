
#include<bits/stdc++.h> 
using namespace std; 

const int N=1e5+5; 
#define Mod 1000000007 

void solve(){
    int n; 
    cin>>n; 
    int v[n];
    for(int i=0;i<n;i++) {
        cin>>v[i]; 
    }
    // ----------------------------------------------------
    set<int> stva; 
    int ddres = 0; 
    int val = 0; 
    // ----------------------------------------------------
    for(int i=0;i<n;i++){ 
        val+=v[i]; 
        stva.insert(v[i]); 
        if(val%2==0){ 
            int noca = val>>1; 
            if(stva.count(noca)) ddres++; 
        } 
    // ----------------------------------------------------
    } 
    cout<<ddres<<endl;
}

int main() { 
    int n;
    cin>>n;
    while(n--){
        solve(); 
    }  
}

