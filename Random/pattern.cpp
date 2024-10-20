#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxi = n;
    
    for(int i=0;i<n-1;i++){
        int tr = n;
        for(int j=0;j<n;j++){
            cout<<max(maxi,tr);
            tr--;
        }
        tr+=2;
        for(int j=1;j<n;j++){
            cout<<max(maxi,tr);
            tr++;
        }
        cout<<"\n";
        maxi--;
        
    }
    for(int i=1;i<=n;i++){
        int tr = n;
        for(int j=0;j<n;j++){
            cout<<max(maxi,tr);
            tr--;
        }
        tr+=2;
        for(int j=1;j<n;j++){
            cout<<max(maxi,tr);
            tr++;
        }
        cout<<"\n";
        maxi++;
    }

    return 0;
}