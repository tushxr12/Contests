#include <bits/stdc++.h>
using namespace std;

int check(string &s, string pattern)
{
    int cnt = 0;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        if(s[i] != pattern[i%3])
            cnt++;
    }
    return cnt;
}

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int ans = n;
    vector<string> patterns = {"RGB","RBG", "GRB", "GBR", "BRG", "BGR"};
    for(auto i : patterns)
    {
        ans = min(ans, check(s,i));
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
