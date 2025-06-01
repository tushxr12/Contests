#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    
    int oddSum = 0, evenSum = 0;
    for(int i = 0;i < n;i++)
    {
        if(i%2 == 0)
            evenSum += v[i];
        else
            oddSum += v[i];
    }
    cout<<max(oddSum, evenSum);
    
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
