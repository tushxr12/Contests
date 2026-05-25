#include<bits/stdc++.h>

using namespace std;

int findLastIndex(vector<int> &v, int num)
{
    int ind = -1;
    int n = v.size();
    for(int i = n - 1;i >= 0;i--){
        if(v[i] == num)
            return i;
    }
    return ind;
}

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    set<int> st;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    
    if(st.size() == n){
        cout<<-1;
        return;
    }
    
    if(v[0] == v[n-1]){
        cout<<0;
        return;
    }
    
    map<int,int> mpp;
    for(auto i : v)
        mpp[i]++;
    
    int ans = INT_MAX;
    
    for(int i = 0;i < n;i++){
        int curr = v[i];
        
        if(mpp[curr] > 1){
            int firstIndex = i;
            
            int lastIndex = findLastIndex(v, curr);
            
            int moves = (firstIndex) + (n - lastIndex -1);
            
            ans = min(ans, moves);
        }
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
