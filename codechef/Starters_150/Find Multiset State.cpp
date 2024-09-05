#include<bits/stdc++.h>
// #define int long long
using namespace std;

void solve()
{
    // cout<<"Working";
    int n,k;cin>>n>>k;
    list<int> v;
    for(int i = 0;i < n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    while(k--)
    {
        int mini = v.front(), maxi = v.back();
        int sum = mini + maxi;
        v.pop_front();
        v.pop_back();
        v.push_back(sum);
    }
    for(auto i : v)
        cout<<i<<" ";
    
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