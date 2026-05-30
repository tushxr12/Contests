#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
        
    if(n == 2){
        cout<<"YES";
        return;
    }
    
    int intialSum = v[0] + v[n-1];
    
    int left = 1, right = n-2;
    while(left < n && right >= 0 && left < right)
    {
        int sum = v[left++] + v[right--];
        if(sum != intialSum){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
