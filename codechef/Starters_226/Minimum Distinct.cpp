#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    
    unordered_map<int,int> mpp;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
        mpp[v[i]]++;
    }
    mpp.erase(v[0]);
    
    vector<int> freqs;
    for(auto i : mpp){
        freqs.push_back(i.second);
    }
    
    sort(begin(freqs), end(freqs));
    int ans = mpp.size() + 1;
    
    for(int i = 0;i < freqs.size();i++)
    {
        if(k >= freqs[i]){
            k -= freqs[i];
            ans -= 1;
        }
        else
            break;
    }
    cout<<ans;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
