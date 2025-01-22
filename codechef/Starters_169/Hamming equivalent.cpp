#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    
    if(n <= 2)
    {
        cout<<"YES";
        return;
    }
    
    if(is_sorted(v.begin(), v.end()))
    {
        cout<<"YES";
        return;
    }
    
    int start = __builtin_popcount(v[0]);
    int end = __builtin_popcount(v[n - 1]);
    int req = __builtin_popcount(n);
    
    vector<int> sorted(v.begin(), v.end());
    sort(sorted.begin(), sorted.end());
    
    for(int i = 0;i < n;i++)
    {
        if(__builtin_popcount(v[i]) != __builtin_popcount(sorted[i]))
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
