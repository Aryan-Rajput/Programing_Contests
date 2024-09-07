
#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<"test";
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+n);
    
    for(int i=0;i<n;i++){
        if(b[i]>a[i]){
            cout<<"Not Hire\n";
            return 0;
        }

    }
    cout<<"Hire\n";
    return 0;
}
