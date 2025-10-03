#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;cin>>n;
    long long mini = max(0LL, n - 2);
    long long maxi = max(0LL, ((n-2)*(n-1))/2);
    cout<<mini<<" "<<maxi;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
