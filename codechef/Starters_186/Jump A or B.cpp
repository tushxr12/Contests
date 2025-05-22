#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    
    long long min_cost = min(a, b) * n;
    long long max_cost = max(a, b) * n;
    
    if (m < min_cost || m > max_cost) {
        cout << "No";
        return;
    }
    
    if(a*n == m || b*n == m)
    {
        cout<<"Yes";
        return;
    }
    
    long long diff = m - b * n; 
    long long step = a - b;     
    
    if (diff % step == 0) {
        long long i = diff / step; // Calculate i
        
        if (i >= 0 && i <= n) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
