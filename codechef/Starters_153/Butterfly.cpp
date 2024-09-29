#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r, b, g;
    cin >> r >> g >> b;

    int maxi = max({r, g, b});
    int oth = 0;

    if (maxi == r)
    {
        oth = g + b;
    }
    else if (maxi == g)
    {
        oth = r + b;
    }
    else
    {
        oth = r + g;
    }
    if (maxi > oth)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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
