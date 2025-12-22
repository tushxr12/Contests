#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;cin>>n>>m;
    if(n == m){
        cout<<"YES";
        return;
    }
    
    if(n > m){
        cout<<"NO";
        return;
    }
    
    long long maxi = 1LL*n*3;
    long long mini = n;
    
    // cout<<"Maxi : "<<maxi<<" Mini : "<<mini<<endl;
    if(m <= maxi && m >= mini){
        if(n%2 == 0 && m%2 == 0){
            cout<<"YES";
        }
        else if(n%2 != 0 && m%2 != 0){
            cout<<"YES";
        }
        else
        {
            // cout<<"THIS else ";
            cout<<"NO";
        }
    }else
    {
        // cout<<"Initial else";
        cout<<"NO";
    }
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
