// A. A+B Again?

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int n;
    cin >> n;
    string s = to_string(n);
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0');
    }
    cout << ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}