#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(3);
    for(int i = 0;i < n;i++)
    {
        int x;cin>>x;
        v[x%3]++;
    }
    string ans = "NO";
    if(v[0] > 0) ans = "YES";
    else if(v[1] >= 1 && v[2] >= 1) ans = "YES";
    else if(max(v[1], v[2]) > 2) ans = "YES";
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
