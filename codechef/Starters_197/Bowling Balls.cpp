#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int ans = 0;
    for(auto i : v)
        if(i >= x && i <= y)
            ans++;
    
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
