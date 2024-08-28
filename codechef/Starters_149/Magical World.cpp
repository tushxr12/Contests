#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int a, b, x;
    cin >> a >> b >> x;

    // a*b , x*x
    // x*x >= a*b

    int sq = x * x;
    int rec = a * b;

    if (sq >= rec)
    {
        cout << 0;
    }
    else
    {

        if (1 * min(a, b) <= sq)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
    }
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