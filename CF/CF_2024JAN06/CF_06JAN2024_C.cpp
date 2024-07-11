#include <bits/stdc++.h>
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {__
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int val1=1e9;
        int val2=1e9;
        int c=0;
        for (int i=0;i<n;i++) {
            if(val1>val2){ 
                swap(val1,val2);
            }
            if(arr[i]<=val1){
                val1=arr[i];
            }
            else if(arr[i]<=val2){
                val2=arr[i];
            }
            else{
                val1=arr[i];
                c++;
            }
        }
        cout <<c<<"\n";
    }
    return 0;
}