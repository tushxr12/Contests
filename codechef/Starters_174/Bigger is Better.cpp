#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    string ans = "";
    for(int i = 0;i < n;i++)
        ans += 'z';
    
    if(ans == s)
        cout<<"-1";
    else
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
