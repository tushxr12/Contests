#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working\n";
    int n, d;
    cin >> n >> d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (d < v[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (ans % 2)
        {
            if (v[i] > d)
            {
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (v[i] <= d)
            {
            }
            else
            {
                ans++;
            }
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