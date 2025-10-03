#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    for(int i = n;i >= 1;i--)
        cout<<i<<" ";
}

int main() {
	// your code goes here
    int n;cin>>n;
    while(n--){
        solve();
        cout<<"\n";
    }
}
