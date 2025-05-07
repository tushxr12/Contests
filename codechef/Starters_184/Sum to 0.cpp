#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    // vector<int> v(n);
    // for(int i = 0;i < n;i++)
    //     cin>>v[i];
    
    if(n == 1)
    {
        cout<<-1;
        return;
    }
    
    if(n%2 == 0)
    {
        for(int i = 0;i < n/2;i++)
        {
            cout<<1<<" ";
        }
        
        for(int i = 0;i < n/2;i++)
            cout<<-1<<" ";
    }
    else
    {
        int ev = n - 3;
        for(int i = 0;i < ev/2;i++)
            cout<<1<<" ";
        for(int i = 0;i < ev/2;i++)
            cout<<-1<<" ";
        cout<<"1 2 -3";
    }
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
