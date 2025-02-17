#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i = 0;i < n;i++)
        cin>>a[i];
    for(int i = 0;i < m;i++)
        cin>>b[i];
    
    if(m == 1)
    {
        for(int i = 0;i < n;i++)
        {
            a[i] = min(a[i], b[0]);
            cout<<a[i]<<" ";
        }
        return;
    }
    
    vector<int> c;
    auto it = min_element(b.begin(), b.end()) - b.begin();
    for(int i = 0;i < m;i++)
    {
        c.push_back(b[(it + i)%m]);
    }
    
    bool flag = false;
    
    for(int i = 0;i < n - m + 1;i++)
    {
        if(a[i] > c[0])
        {
            flag = true;
            for(int j = i;j <= n - m;j++)
            {
                a[j] = c[0];
            }
            for(int j = 1;j < m;j++)
            {
                a[n + j - m] = c[j];
            }
        }
        if(flag)
            break;
    }
    
    if(flag)
    {
        //Print array a
        for(auto i : a)
            cout<<i<<" ";
    }
    else
    {
        vector<int> a1, a2;
        for(auto i : a)
            a1.push_back(i);
        
        for(int i = 0;i < n - m;i++)
        {
            a2.push_back(a[i]);
        }
        
        for(int i = 0;i < m;i++)
            a2.push_back(c[i]);
        
        auto ans = min(a1,a2);
        for(auto i : ans)
            cout<<i<<" ";
    }
    
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
