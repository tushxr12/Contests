#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    set<int> st;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    if(st.size() >= 2)
        cout<<2;
    else
        cout<<-1;
        
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
