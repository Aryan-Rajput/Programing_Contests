#include <bits/stdc++.h>
using namespace std;

int func(vector<int> arr){
    int cnt=0;
    sort(arr.begin(),arr.end());
    while(!(arr[0]==arr[1] && arr[1]==arr[2])){
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[1] && arr[1]+1 == arr[2]){
            // cout<<-1;
            return -1;
        }
        if(arr[1]==arr[2] && arr[0]+1 == arr[1]){
            // cout<<-1;
            return -1;
        }
        arr[0]++;
        arr[1]++;
        arr[2]--;
        cnt++;
        
    }
    // cout<<cnt;
    return cnt;
}
int main() {
    int n;
    cin>>n;
    vector<int> res;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        res.push_back(func({x,y,z}));
    }
    for(auto i:res){
        cout<<i<<endl;
    }
    
    // cout<<cnt;
    return 0;
}