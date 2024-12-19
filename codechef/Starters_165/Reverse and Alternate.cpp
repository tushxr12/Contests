#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int> grps;
    for(int i = 1;i <n;i++)
    {
        if(s[i] == s[i - 1])
            grps.push_back(i);
    }
    // cout<<"Groups size : "<<grps.size()<<"\n";
    if(grps.size() > 2)
    {
        cout<<"NO";
        return;
    }
    else if(grps.size() == 0)
    {
        cout<<"YES";
        return;
    }
    else if(grps.size() == 1)
    {
        int index = grps[0];
        if(s[index] == s[0] && s[index] == s.back())
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        return;
    }
    else
    {
        if(s[grps[0]] != s[grps[1]])
        {
            cout<<"YES";
        }else
        {
            cout<<"NO";
        }
        return;
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
