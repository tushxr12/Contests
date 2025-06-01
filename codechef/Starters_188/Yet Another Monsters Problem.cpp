#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    sort(v.rbegin(), v.rend());
    int ans = min(v[0],n);
    for(int i = 1;i < n;i++)
    {
        ans = min(ans, v[i] + i);
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
