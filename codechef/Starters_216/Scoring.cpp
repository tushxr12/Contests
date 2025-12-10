#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;cin>>x>>y;
    int alice = (x+y)/2;
    int bob = y - alice;
    cout<<alice<<" "<<bob;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
