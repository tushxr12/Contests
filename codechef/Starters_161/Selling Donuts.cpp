#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    
    vector<int> a,b;
    for(int i = 0;i < n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    
    for(int i = 0;i< m;i++)
    {
        int x;cin>>x;
        b.push_back(x);
    }
    
    //1 2 0 2 : 1->1, 2->2, 3->0, 4->2
    //1 3 1
    
    map<int,int> mpp;
    for(int i = 0;i < n;i++)
    {
        mpp.insert({i + 1, a[i]});
    }
    
    int ans = 0;
    for(int i = 0;i < m;i++)
    {
        if(mpp[b[i]])
        {
            mpp[b[i]]--;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
