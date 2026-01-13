#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    
    map<char,int> mpp;
    for(auto i : s)
        mpp[i]++;
    
    for(auto i : mpp)
    {
        if(i.second >= 2){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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
