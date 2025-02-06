#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &nums)
{
    int ans = 1, maxi = 1;
    int n = nums.size();
    for(int i = 1;i < n;i++)
    {
        if(nums[i] >= nums[i - 1])
            ans++;
        else
            ans = 1;
        maxi = max(maxi, ans);
    }
    return maxi;
}

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i <n;i++)
        cin>>v[i];
    int maxi = 1;
    for(int i = 0;i < n;i++)
    {
        v[i] *= k;
        maxi = max(maxi, findMax(v));
        v[i] /= k;
    }
    cout<<maxi;
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
