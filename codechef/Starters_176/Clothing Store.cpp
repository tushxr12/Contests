#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> s(3), t(3);
    for(int i = 0;i < 3;i++)
        cin>>s[i];
    for(int i = 0;i < 3;i++)
        cin>>t[i];
    
    int ans = 0;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j <= i;j++)
        {
            int take = min(s[i], t[j]);
            ans += take;
            s[i] -= take;
            t[j] -= take;
        }
    }
    cout<<ans;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}   
