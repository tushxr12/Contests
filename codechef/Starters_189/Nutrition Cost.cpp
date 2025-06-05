#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,c;cin>>n>>c;
    vector<int> a(n), b(n);
    for(int i = 0;i < n;i++)
        cin>>a[i];
    
    for(int i = 0;i < n;i++)
        cin>>b[i];
    
    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++)
        v[i] = (make_pair(a[i] , b[i]));
    
    // for(auto i : v)
    //     cout<<i.first<<" "<<i.second<<"\n";
    
    map<int,int> mpp;
    for(auto i : v)
    {
        int curr = i.first;
        if(mpp.find(curr) == mpp.end())
        {
            mpp[curr] = i.second;
        }
        mpp[curr] = min(mpp[curr],i.second);
    }
    
    // for(auto i : mpp)
    //     cout<<i.first<<" "<<i.second<<"\n";
    
    vector<int> temp;
    for(auto i : mpp)
        temp.push_back(i.second);
    
    sort(temp.begin(), temp.end()); // 1 4 7
    int ans = 0, currCount = 1, currVal = 0, toSubtract = 0;
    
    for(int i = 0;i < temp.size();i++)
    {
        toSubtract += temp[i];
        currVal = c*(i + 1) - toSubtract;
        ans = max(ans, currVal);
    }
    cout<<ans;
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
