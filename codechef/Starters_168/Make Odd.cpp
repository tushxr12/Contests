#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    string s1,s2;
    cin>>s1>>s2;
    
    int oc1 = 0, oc2 = 0;
    
    for(auto i : s1)
        if(i == '1')
            oc1++; // 2
    for(auto i : s2)
        if(i == '1')
            oc2++; // 2
    
    //110
    //101
    
    //1
    int cnt = 0;
    for(int i = 0;i < n;i++)
    {
        if(s1[i] == '1' && s2[i] == '1')
            cnt++;
    }
    int tot = oc1 + oc2;
    
    int remOnes = tot - 2*cnt;
    
    if(cnt%2)
    {
        cout<<"YES";
        return;
    }
    
    if(remOnes>0)
    {
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
