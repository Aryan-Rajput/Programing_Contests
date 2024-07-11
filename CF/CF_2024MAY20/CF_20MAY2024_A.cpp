#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int x = m;
    int c=0;
    for(int i=0;i<=x;i+=2){
        n = n-7;
        m = m-2;
        c++;
    }
    n+=7;
    m+=2;
    c--;
    if(m==1){
        n = n-11;
        m = m-1;
        c++;
    }
    if(n>0){
        if(n<=15){
            c++;
            n = n-15;
            cout<<c<<"\n";
            return;
        }
        c += (n/15);
        n = n%15;
        if(n>0){
            c++;
            cout<<c<<"\n";
            return ;
        }
    }
    cout<<c<<"\n";
    // cout<<n<<" "<<m<<"\n";

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
