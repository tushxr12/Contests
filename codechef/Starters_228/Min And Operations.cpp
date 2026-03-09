#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int ans = 0;
    for(int i = n;i >= 0;i -= 2){
        ans += i;
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
