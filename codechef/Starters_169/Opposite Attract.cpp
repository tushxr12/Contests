#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    // vector<int> v(n);
    // for(int i = 0;i < n;i++)
    // {
    //     cin>>v[i];
    // }
    string s;cin>>s;
    string ans = "";
    for(auto i : s)
    {
        if(i == '0')
            ans += '1';
        else
            ans += '0';
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
