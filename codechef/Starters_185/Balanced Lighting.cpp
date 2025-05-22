#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    if(n%2){
        cout<<"No";
        return;
    }
    
    int oneFreq = 0, twoFreq = 0;
    for(auto i : v){
        if(i == 1)
            oneFreq++;
        else if(i == 2)
            twoFreq++;
    }
    
    if(oneFreq > n/2 || twoFreq > n/2)
    {
        cout<<"No";
        return;
    }
    
    cout<<"Yes";
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
