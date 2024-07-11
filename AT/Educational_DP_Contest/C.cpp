// doing it with using extra space

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> v;

// void input(){
//     int a1, b1, c1;
//     cin >> a1 >> b1 >> c1;
//     v.push_back({a1, b1, c1});
// }

// int main(){
//     int n;
//     cin >> n;
//     int i=0;
//     int a,b,c;
//     cin>>a>>b>>c;
//     while(i<n){
//         input();
//         i++;
//     }
//     for(int i=1;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             if(j==0){{
//                 v[i][j]+=max(v[i-1][j+1],v[i-1][j+2]);
//             }}
//             else if(j==v[0].size()-1){
//                 v[i][j]+=max(v[i-1][j-1],v[i-1][j-2]);
//             }
//             else{
//                 v[i][j]+= max(v[i-1][j+1], v[i-1][j-1]);
//             }
//         }
//     }
//     cout<<max(v[n-1][0], max(v[n-1][1], v[n-1][2]));
//     return 0;

// }
// ----------------------------------------------------------------------

// doing it with using constant space
#include <bits/stdc++.h>
using namespace std;

int func(int a, int b, int c, int n){
    if(n==1){
        return max(a,max(b,c));
    }
    int x,y,z;
    cin>>x>>y>>z;
    x = x + max(b,c);
    y = y + max(a,c);
    z = z + max(a,b);
    return (func(x,y,z,n-1));
}

int main(){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<func(a,b,c,n);
    return 0;
}