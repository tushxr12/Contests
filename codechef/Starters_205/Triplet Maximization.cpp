#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    
    if(x == 0 && y == 0){
        cout<<0;
        return;
    }
    int n = x + y;
    if(y >= n/3){
        cout<<2*(n/3);
    }
    else
    {
        cout<<(y + n/3);
    }
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
