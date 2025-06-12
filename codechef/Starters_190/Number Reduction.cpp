#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    if(n % 3 == 0)
        cout<<3;
    else
        cout<<1;
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
