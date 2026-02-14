#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> a(n), b(n);
    
    int totSum = 0;
    
    for(int i = 0;i < n;i++){
        cin>>a[i];
        totSum += a[i];
    }
    for(int i = 0;i < n;i++){
        cin>>b[i];
    }
    
    int maxSum = -1;
    int realSum = totSum;
    for(int i = 0;i < n;i++)
    {
        totSum = realSum;
        totSum = (totSum - a[i] + b[i]);
        maxSum = max(maxSum, totSum);
    }
    cout<<maxSum;
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
