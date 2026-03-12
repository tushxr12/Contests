#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++)
    {
        int x;cin>>x;
        v[i] = {x,i};
    }
    sort(begin(v), end(v));
    
    vector<int> ans;
    bool found = false;
    
    int first = v[0].first;
    int firstIndex = v[0].second + 1;
    int second = v[1].first;
    int secondIndex = v[1].second + 1;
    int third = v[2].first;
    int thirdIndex = v[2].second + 1;
    
    int thirdLast = v[n-3].first;
    int thirdLastIndex = v[n-3].second + 1;
    int secondLast = v[n-2].first;
    int secondLastIndex = v[n-2].second + 1;
    int last = v[n-1].first;
    int lastIndex = v[n-1].second + 1;
    
    if(first + second != third)
    {
        cout<<firstIndex<<" "<<secondIndex<<" "<<thirdIndex;
    }
    else if(first + third != second)
    {
        cout<<firstIndex<<" "<<thirdIndex<<" "<<secondIndex;
    }
    else if(second + third != first){
        cout<<secondIndex<<" "<<thirdIndex<<" "<<firstIndex;
    }
    else if(thirdLast + secondLast != last)
    {
        cout<<thirdLastIndex<<" "<<secondLastIndex<<" "<<lastIndex;
    }
    else if(thirdLast + last != secondLast)
    {
        cout<<thirdLastIndex<<" "<<lastIndex<<" "<<secondLastIndex;
    }
    else if(last + secondLast != thirdLast)
    {
        cout<<lastIndex<<" "<<secondLastIndex<<" "<<thirdLastIndex;
    }
    else
    {
        cout<<-1;
    }
    
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
