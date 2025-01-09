#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
        
    // cout<<"Working";
    // for(auto i: v)
    //     cout<<i<<" ";
    // cout<<"END!!";
    
    //5 1 2 4 3 -> 1 0 0 0 0 
    
    vector<int> ans(n);
    ans[0] = 1;
    
    
    for(int i = 1;i < n;i++)
    {
        int curr = v[i];
        bool fl = false;
        for(int j = i - 1;j >= 0;j--)
        {
            if(v[j] > curr)
            {
                ans[i] = 0;
                fl = true;
                break;
            }
        }
        if(fl == false)
        {
            ans[i] = 1;
        }
    }
    for(auto i : ans)
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
