#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m,k;
    cin>>m>>k;
    
    string s;cin>>s;
    //n = (m + (k - 1))
    int cnt = 0;
    for(auto i:s)
        if(i=='S')
            cnt++;
    if(cnt >= k)
    {
        cout<<m;
        return;
    }
    cout<<(m + (k - cnt - 1));
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
