#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int x = arr[0];
    int y;
    int z = 0;

    for(int i=1;i<n;i++) {
        if(z==0) {
            if (arr[i]%x != 0) {
                z++;
                y = arr[i];
            }
        }else if(z==1) {
            if (arr[i]%x != 0 && arr[i]%y != 0) {
                z++;
            }
        }

        if (z>1) {
            return false;
        }
    }
    return true;
}

void sv(){
    if(solve()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    while(n--){
        sv();
    }
}