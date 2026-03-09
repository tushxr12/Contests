#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i <n;i++)
        cin>>v[i];
    int curr = 0;
    for(int i = 0;i < n;i++){
        cout<<min(curr, v[i])<<" ";
        if(v[i] > curr)
            curr++;
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
