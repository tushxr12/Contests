#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;cin>>a>>b;
    long long n = a.size(), m = b.size();
    long long ptr = m - 1;
    long long ans = 0;
    for(int i = n - 1;i >= 0;i--)
    {
        if(ptr >= 0 && a[i] == b[ptr])
        {
            ptr--;
        }
        else
        {
            ans += (ptr + 2);
        }
    }
    if(ptr >= 0)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
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
