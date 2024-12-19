#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    
    int st = n-1;
    long long ans = 0;
    long long cnt =0 ,prev = v[n-1];
    // 3 1 4 1 5
    //prev = 5, st = 4
    while(st>=0){
        if(v[st]<prev){ // 5 < 5
            cnt++;
        }
        else if(v[st]>=prev){
            ans = max(ans , cnt); // ans = 0
            prev = v[st]; // prev = 5
            cnt = 0;
        }
        st--;
    }
    ans = max(ans,cnt);
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
