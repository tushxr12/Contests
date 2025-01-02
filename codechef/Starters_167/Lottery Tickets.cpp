#include <bits/stdc++.h>


using namespace std;


void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    int k = v[0];
    sort(v.begin(), v.end());
    
    if(n == 1)
    {
        cout<<1e6;
        return;
    }
    
    if(v[n - 1] == k)
    {
        int ans = 0;
        ans += (1e6 - k + 1);
        ans += k - (k + v[n - 2] + 1)/2;
        cout<<ans;
    }
    else if(v[0] == k)
    {
        int ans = 0;
        ans += k;
        ans += (v[1] + k)/2 - k;
        cout<<ans;
    }
    else
    {
        auto it = lower_bound(v.begin(), v.end(),k) - v.begin();
        int low = (v[it - 1] + v[it] + 1)/2;
        int high = (v[it] + v[it + 1])/2;
        cout<<high - low + 1;
    }
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}   
