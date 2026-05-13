#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x;cin>>x;
    if(x <= 20){
        cout<<x*10;
        return;
    }
    cout<<((x-20)/2)*5 + (200);
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
