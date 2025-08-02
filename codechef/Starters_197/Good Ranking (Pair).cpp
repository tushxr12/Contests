#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    cout<<2<<"\n";
    for(int i = 1;i <= n;i++)   
        cout<<i<<" ";
    cout<<"\n";
    for(int i = n;i >= 1;i--)
        cout<<i<<" ";
}

int main() {
	// your code goes here
    // int t;cin>>t;
    // while(t--){
        solve();
        cout<<"\n";
    // }
}
