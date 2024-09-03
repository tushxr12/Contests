#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // cout<<"Working";
    int n;
    cin >> n;
    vector<vector<char>> v;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char x;
            cin >> x;
            if (x == '#')
            {
                ans.push_back(j + 1);
            }
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
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