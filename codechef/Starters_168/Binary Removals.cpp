#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,x,k;
    cin>>n>>x>>k;
    string s;cin>>s;
    ll inversions = 0;
    ll c1 = 0;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == '1')
            c1++;
        else
        {
            inversions += c1;
        }
    }
    if(inversions <= x && inversions%k == 0)
        cout<<"1";
    else
        cout<<"2";
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
