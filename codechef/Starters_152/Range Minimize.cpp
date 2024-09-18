#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (n == 3)
    {
        cout << 0;
        return;
    }
    sort(v.begin(), v.end());
    cout << min({v[n - 1] - v[2], v[n - 2] - v[1], v[n - 3] - v[0]});
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