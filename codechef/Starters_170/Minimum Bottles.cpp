#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    
    if(sum <= x)
    {
        cout<<1;
        return;
    }
    if(sum%x == 0)
        cout<<sum/x;
    else
        cout<<sum/x + 1;
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
