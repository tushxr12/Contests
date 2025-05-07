#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    string s,t;
    cin>>s>>t;
    
    bool allZeroes = true;
    for(auto i : s)
        if(i == '1')
        {
            allZeroes = false;
            break;
        }
        
    
    if(s == t)
    {
        cout<<"YES";
        return;
    }
    
    if(allZeroes)
    {
        cout<<"NO";
        return;
    }
    
    int cnt = 0;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == '1' && t[i] == '0')
        {
            cnt++;
            s[i] = '0';
        }
    }
    
    if(cnt%2)
    {
        cout<<"NO";
        return;
    }
    
    if(s == t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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
