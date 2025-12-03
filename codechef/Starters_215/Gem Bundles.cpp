#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int r,b,g;
    cin>>r>>b>>g;
    
    if(r == 0 || b == 0 || g == 0){
        cout<<(r*3) + (b*3) + (g*3);
        return;
    }
    
    int mini = min({r,b,g});
    int ans = mini;
    int rem = r - mini + b - mini + g - mini;
    
    cout<<(ans*10) + (rem*3);
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
