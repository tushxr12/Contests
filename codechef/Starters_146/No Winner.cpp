#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    if (a == b || b == c || a == c)
    {
        cout << "YES";
        return;
    }

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end()); // 2 3 5  0

    for (int i = 1; i < 3; i++)
    {
        if (v[i] - v[i - 1] <= m)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
