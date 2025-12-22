#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0;i < n;i++){
        cin>>v[i];
        sum += v[i];
    }
    
    if(sum >= 0)
    {
        cout<<0;
        return;
    }
    
    for(int i = 1;i <= 100;i++){
        if(sum + (i*n) >= 0){
            cout<<i;
            return;
        }
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
