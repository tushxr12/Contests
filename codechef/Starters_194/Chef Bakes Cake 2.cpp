#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> a(n), b(n);
    for(int i = 0;i < n;i++)
        cin>>a[i];
    for(int i = 0;i < n;i++)
        cin>>b[i];
    // cout<<"\nA : ";
        
    // for(auto i : a)
    //     cout<<i<<" ";
    
    // cout<<"\nB : ";
    // for(auto i : b)
    //     cout<<i<<" ";
    // cout<<'\n';
    
    int ans = 0;
    for(int i = 0;i < n;i++)
    {   
        if(a[i] > b[i])
        {
            ans += abs(a[i] - b[i]);
        }
    }
    cout<<ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
