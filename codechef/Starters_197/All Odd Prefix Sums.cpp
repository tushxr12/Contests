#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int oddCount = 0;
    for(auto i : v)
        if(i%2)
            oddCount++;
    
    if(oddCount == 1)
        cout<<"YES";
    else
        cout<<"NO";
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
