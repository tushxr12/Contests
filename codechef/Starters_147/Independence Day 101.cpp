#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    int sum = v[0] + v[1];
    if (sum >= v[2] - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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
