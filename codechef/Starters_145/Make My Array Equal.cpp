#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working\n";
    int n;
    cin >> n;
    vector<int> v;
    int oth = 0, zr = 0, on = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            oth = x;
        v.push_back(x);
    }
    bool flag = true;
    int f = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] != f)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            zr++;
        else if (v[i] == oth)
            on++;
    }
    // cout<<"Other "<<oth<<"\n"<<"Zeroes : "<<zr<<"\n";
    if (on + zr == n)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}