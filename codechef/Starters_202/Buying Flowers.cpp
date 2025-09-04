#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    if(n == 2){
        cout<<4;
    }
    else if(n == 3){
        cout<<5;
    }
    else
    {
        if(n%3 == 1){
            cout<<2*4 + ((n-4)/3)*5;
        }
        else
            cout<<(n/3)*5 + ((n%3)/2)*4;
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
