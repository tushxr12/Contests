#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    if(n == 1 || n == 3)
    {
        cout<<1;
        return;
    }
    if(n%2)
    {
        cout<<n/2;
    }
    else
    {
        cout<<n/2 + 1;
    }
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
