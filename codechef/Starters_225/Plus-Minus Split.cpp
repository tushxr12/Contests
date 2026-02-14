#include<bits/stdc++.h>

using namespace std;

bool allElemsEqual(vector<int> &v)
{
    set<int> st(begin(v), end(v));
    return (st.size() == 1);
}

bool absValueSame(vector<int> &v)
{
    set<int> st;
    for(auto i : v)
    {
        st.insert(abs(i));
    }
    return (st.size() == 1);
}

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    int elemsSum = 0;
    
    for(int i = 0;i < n;i++){
        cin>>v[i];
        elemsSum += v[i];
    }
    
    if(allElemsEqual(v))
    {
        cout<<"YES";
        return;
    }
    
    if(absValueSame(v)){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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
