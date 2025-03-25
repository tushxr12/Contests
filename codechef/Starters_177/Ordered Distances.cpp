#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> x(n), y(n);
    for(int i = 0;i < n;i++)
        cin>>x[i];
    for(int i = 0;i < n;i++)
        cin>>y[i];
    
    for(int i = 0;i < n;i++)
    {
        int p = x[i];
        vector<pair<int,int>> v;
        
        for(int j = 0;j < n;j++)
            v.push_back({abs(x[j] - p), x[j]});
        
        sort(v.begin(), v.end());
        
        vector<int> help(n);
        for(int i = 0;i < n;i++)
            help[i] = v[i].second;
        
        if(help == y)
        {
            cout<<i + 1;
            return;
        }
    }
    cout<<-1;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
