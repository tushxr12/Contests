#include<bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int n;cin>>n;
    vector<int> v;
    for(int i = 0;i < n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    if(n == 1)
    {
        cout<<v[0];
        return;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    // 1 1 3 4
    for(int i = 0;i < n;i++)
    {
        if(i > 0)
        {
            // cout<<"ans : "<<ans<<"\n";
            // cout<<"v[i] - i "<<(v[i] - i)<<"\n";
            if(v[i] - i > 0)
                ans += (v[i] - i);
        }
        else
            ans += v[i];
        
        // for(int j = i + 1;j < n;j++)
        // {
        //     if(v[j] > 0)
        //         v[j] -= 1;
        // }
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
