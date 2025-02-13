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
    
    if(st.size() == n)
    {
        cout<<-1;
        return;
    }
    
    sort(v.begin(), v.end());
    for(int i = 1;i < n;i++)
    {
        if(v[i] == v[i - 1])
        {
            cout<<"1\n"<<v[i]<<endl;
            return;
        }
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
