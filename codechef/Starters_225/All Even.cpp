#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    
    int sum = 0;
    
    for(int i = 0;i < n;i++){
        cin>>v[i];
        sum += v[i];
    }
    
    if(sum%2 == 0){
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
