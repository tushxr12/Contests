#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    int c10 = count(s1.begin(), s1.end(), '0');
    int c11 = count(s1.begin(), s1.end(), '1');
    int c20 = count(s2.begin(), s2.end(), '0');
    int c21 = count(s2.begin(), s2.end(), '1');
    int c30 = count(s3.begin(), s3.end(), '0');
    int c31 = count(s3.begin(), s3.end(), '1');
    
    int cnt0 = c10 + c20 + c30;
    int cnt1 = 3*n - cnt0;
    
    // cout<<"Count0 : "<<cnt0<<", Count1 : "<<cnt1<<"\n";
    
    if(cnt0 == 0 || cnt1 == 0)
    {
        cout<<0;
        return;
    }
    
    if(cnt1%n)
    {
        cout<<-1;
        return;
    }
    
    int ans;
    if(cnt0 == n)
    {
        ans = min({n-c10, n-c20, n-c30});
    }
    else
    {
        ans = min({n-c11, n-c21, n-c31});
    }
    cout<<ans;
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
