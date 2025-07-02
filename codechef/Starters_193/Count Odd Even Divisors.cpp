#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int oddDivisors = 0, evenDivisors = 0;
    for(int i = 1;i <= n;i++)
    {
        if(n%i == 0)
        {
            if(i%2)
                oddDivisors++;
            else
                evenDivisors++;
        }
    }
    cout<<oddDivisors<<" "<<evenDivisors;
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
