#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    int ans = INT_MAX;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        
        if(a >= 7)
        {
            ans = min(ans, b);
        }
    }
    if(ans == INT_MAX)
        cout<<-1;
    else
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
