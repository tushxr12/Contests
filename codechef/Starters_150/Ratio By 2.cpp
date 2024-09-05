#include<bits/stdc++.h>
// #define int long long
using namespace std;

void solve()
{
    // cout<<"Working";
    int x,y;
    cin>>x>>y;
    
    if(x >= 2 * y || y >= 2*x)
    {
        cout<<"0";
        return;
    }
    
    int maxi = max(x,y);
    int mini = min(x,y);
    cout<<abs((maxi/2) - mini);
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}