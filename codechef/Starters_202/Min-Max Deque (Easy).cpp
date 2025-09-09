#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q;cin>>n>>q;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    
    int ans = max(v[0], v[1]);
    
    for(int i = 2;i < n;i++){
        if(i%2 == 0){
            ans = min(ans, v[i]);
        }
        else
        {
            ans = max(ans, v[i]);
        }
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
