#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    long long maxi = 0, limit, temp;
    priority_queue<int, vector<int> ,greater<int>> q;
    
    for(int i = 0;i < n;i++){
        long long x;cin>>x;
        q.push(x);
        
        limit = maxi = max(maxi, x);
    }
    
    long long res = maxi - q.top();
    
    while(q.top() <= limit)
    {
        temp = q.top();
        q.pop();
        
        res = min(res, maxi - temp);
        maxi = max(maxi, 2*temp);
        q.push(2*temp);
    }
    
    cout<<res;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
