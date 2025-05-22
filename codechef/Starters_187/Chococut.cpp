#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long n,m,k;
    cin>>n>>m>>k;
    
    if(k == 0)
    {
        cout<<n*m;
        return;
    }
    
    long long total = n*m;
    
    if(total < k){
        cout<<0;
        return;
    }
    
    long long row = 0;
    for(int i = 1;i <= n;i++)
    {
        long long forThis = m*i;
        if(forThis >= k)
        {
            row = forThis;
            break;
        }
    }
    
    long long col = 0;
    for(int j = 1;j <= m;j++)
    {
        long long forThis = n*j;
        if(forThis >= k)
        {
            col = forThis;
            break;
        }
    }
    
    
    if(total - k < min(n,m)){
        cout<<0;
        return;
    }
    
    cout<<max(total - row, total - col);
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
