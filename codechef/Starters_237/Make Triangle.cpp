#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    
    int side1 = x + y;
    int side2 = y + z;
    int side3 = x + z;
    
    if(side1 > z && side2 > x && side3 > y){
        cout<<0;
        return;
    }
    
    int ans = 0;
    if(side1 <= z){
        ans += abs(z - side1 + 1);
    }
    
    if(side2 <= x) {
        ans += abs(x - side2 + 1);
    }
    
    if(side3 <= y){
        ans += abs(y - side3 + 1);
    }
    cout<<ans;
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
