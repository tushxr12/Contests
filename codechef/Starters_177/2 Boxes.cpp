#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    
    if(abs(x-y) == k)
    {
        cout<<0;
        return;
    }
    
    int diff = abs(x-y);
    
    if((diff%2 == 0 && k%2 != 0) || (diff%2 != 0 && k%2 == 0))
    {
        cout<<-1;
        return;
    }
    
    if(x+y == k)
    {
        cout<<min(x,y);
        return;
    }
    
    int req = abs(k - diff);
    cout<<req/2;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
