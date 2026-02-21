#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y,n;
    cin>>x>>y>>n;
    
    int res = x - (n*y);
    if(res < 0){
        cout<<"0";
        return;
    }
    cout<<res;
    
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
