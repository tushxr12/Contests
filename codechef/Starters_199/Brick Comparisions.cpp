#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int maxEle = *max_element(v.begin(), v.end());
    for(int i = 0;i < n;i++){
        if(v[i] == maxEle){
            cout<<i+1;
            return;
        }
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
