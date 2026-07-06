#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    
    int ans = 0;
    
    while(x != y)
    {
        int currDegree = ceil(x*1.0/10*1.0);
        ans += currDegree;
        x--;
    }
    cout<<ans;
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
