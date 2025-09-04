#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    
    int max_y = (y+5)*2;
    int min_y = (y*2);
    
    if(x + min_y > 50){
        cout<<"NO";
        return;
    }
    if(x + max_y >= 50){
        cout<<"YES";
    }
    else
    {
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
