#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    int maxi = 101;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a > maxi){
            maxi = a;
        }
        else if(b < maxi){
            maxi = b;
        }
    }
    cout<<maxi;
}

int main()
{
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
