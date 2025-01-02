#include<bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int n;cin>>n;
    string s;cin>>s;
    string ans = "";
    int c = 0;
    for(int i = 0;i < n - 1;i++)
    {
        if(s[i] != s[i + 1])
        {
            c++;
        }
    }
    if(c == 0)
    {
        cout<<n;
        return;
    }
    cout<<1;
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
