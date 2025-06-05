#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    
    int ans = 0;
    for(int zeroes = 0;zeroes <= n;zeroes++)
    {
        int ones = n - zeroes;
        ans = max(ans, zeroes*a + ones*b + zeroes*ones*c);
        ans = max(ans, zeroes*a + ones*b + ones*zeroes*d);
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
