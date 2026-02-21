#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    if(n < a){
        cout<<n;
        return;
    }
    
    while(n >= a){
        n -= a;
        n += b;
    }
    cout<<n;
    
}

int main()
{
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
