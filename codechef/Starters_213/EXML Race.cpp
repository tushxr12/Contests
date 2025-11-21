#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    int maxi = -1;
    int i = 1;
    int ans = -1;
    
    while(n--){
        int a,b;
        cin>>a>>b;
        
        int speed = a/b;
        if(speed > maxi){
            ans = i;
            maxi = speed;
        }
        i++;
    }
    cout<<ans;
}

int main()
{
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
