#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,x;cin>>n>>x;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    long long maxi = INT_MIN;
    long long sum = 0;
    sort(v.rbegin(), v.rend());
    
    for(long long i = 0;i <n;i++)
    {
        maxi = max(maxi, v[i]+ i*x);
    }
    cout<<maxi;
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
