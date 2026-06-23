#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    long long target = 2 * k - sum;

    sort(begin(a), end(a));

    long long ans = 0;
    int l = 0, r = n - 1;

    while (l < r) {
        if (a[l] + a[r] > target) {
            ans += (r - l); 
            r--;
        } else {
            l++;
        }
    }

    cout << ans;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
