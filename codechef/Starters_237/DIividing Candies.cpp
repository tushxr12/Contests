#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    
    int maxi = 0;
    for(auto i : v){
        if(i%x == 0){
            maxi = max(maxi, i);
        }
    }
    cout<<maxi;
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
