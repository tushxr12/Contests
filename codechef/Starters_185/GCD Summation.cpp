#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    if(k == 1 && n == 2)
    {
        cout<<1<<" "<<2;
        return;
    }
    
    int pairs = n - 1;
    int miniGcd = pairs;
    
    if(k < miniGcd){
        cout<<-1;
        return;
    }
    
    if(k == n - 1){
        for(int i = 1;i <= n;i++)
            cout<<i<<" ";
        return;
    }
    
    int lastSum = n - 2;
    int rem = k - lastSum;
    
    cout<<rem<<" "<<rem*2<<" ";
    int strtFrom = rem*2 + 1;
    while(lastSum--)
    {
        cout<<strtFrom<<" ";
        strtFrom++;
    }
    // cout<<"Possible";
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
