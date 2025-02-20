#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    set<int> st;
    map<int,int> mpp;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
        mpp[v[i]]++;
    }
    
    if(st.size() == n)
    {
        cout<<n;
        return;
    }
    
    int ans = 0, zeroes = 0, rems = 0;
    for(auto i : mpp)
    {   
        if(i.second % 2 == 0 || i.first == 0)
        {
            zeroes++;
        }
        else
        {
            rems++;
            zeroes++;
        }
    }
    if(zeroes)
        ans++;
    
    if(rems)
        ans += rems;
    cout<<ans;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
