#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        if(v[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
        
    int ans = cnt2;
    
    if(cnt1%2 == 0)
        ans = min(ans, cnt1/2);
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
    return 0;
}
