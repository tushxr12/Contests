#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0;
        return;
    }
    int ans = 0;
    while (a != b)
    {
        if (a < b)
        {
            ans += ceil(b * 1.0 / 2);
            b /= 2;
        }
        else
        {
            ans += ceil(a * 1.0 / 2);
            a /= 2;
        }
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