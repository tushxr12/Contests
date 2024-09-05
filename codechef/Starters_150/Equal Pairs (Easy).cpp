#include <bits/stdc++.h>
// #define int long long
using namespace std;

void solve()
{
    // cout<<"Working";
    int n;
    cin >> n;
    vector<int> v;
    bool otherThanZero = false, nonZero = true;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            otherThanZero = true;
        if (x == 0)
        {
            nonZero = false;
            zeroCount++;
        }
        v.push_back(x);
    }

    if (nonZero == true)
    {
        int ans = 0; // 12133
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] == v[j])
                    ans++;
            }
        }
        cout << ans;
        return;
    }

    if (otherThanZero == false)
    {
        int sum = n - 1; // 00000
        int ans = 0;
        for (int i = 1; i <= sum; i++)
            ans += i;
        cout << ans;
        return;
    }

    // 1 1 2 0 0

    // 11200 1->4 , 2->1,
    map<int, int> mpp;
    for (auto i : v)
    {
        if (i != 0)
            mpp[i]++;
    }

    int maxFreq = INT_MIN, maxNum = -1;
    for (auto i : mpp)
    {
        if (i.second > maxFreq)
        {
            maxFreq = max(maxFreq, i.second);
            maxNum = i.first;
        }
    }

    // 1->3, 4->3
    int maxiFreq = maxFreq + zeroCount; // 1->4, 4->3
    list<int> freq;

    for (auto i : mpp)
        freq.push_back(i.second);
    freq.sort();     // 3 3
    freq.pop_back(); // 3

    freq.push_back(maxiFreq); // 3 4

    int ans = 0;
    for (auto i : freq)
    {
        if (i >= 2)
        {
            ans += ((i - 1) * (i)) / 2;
        }
    }
    cout << ans;
}
// 123456
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