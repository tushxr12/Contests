#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    
    for(int i = 0;i <x/2;i++)
        cout<<"1";
    for(int i = 0;i <y;i++)
        cout<<"2";
    for(int i = 0;i<x/2;i++)
        cout<<"1";
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
