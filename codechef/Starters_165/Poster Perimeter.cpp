#include<bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int n,m,k;
    cin>>n>>m>>k;
    
    if(k == 1)
    {
        cout<<3;
        return;
    }
    if(k == 2)
    {
        cout<<2;
        return;
    }
    int maxPer = 2*(n + m);
    if(maxPer >= k && k%2 == 0 && k >= 4)
    {
        cout<<0;
    }
    else
    {
        if(maxPer >= k)
        {
            cout<<1;
        }
        else
        {
            cout<<abs(k - maxPer);
        }
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
