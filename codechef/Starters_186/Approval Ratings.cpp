#include<bits/stdc++.h>

using namespace std;

void solve()
{
    // int a,b,c,d,e;
    // cin>>a>>b>>c>>d>>e;
    
    vector<int> v(5);
    for(int i = 0;i < 5;i++)
        cin>>v[i];
    
    sort(v.begin(), v.end());
    
    int sum = v[0] + v[1] + v[2] + v[3] + v[4];
    int avg = (sum/5);
    if(avg >= 7){
        cout<<0;
        return;
    }
    
    int gc = 0;
    for(int i = 0;i < 5;i++)
    {
        sum += (10 - v[i]);
        int newAvg = sum/5;
        gc += 100;
        if(newAvg >= 7)
        {
            cout<<gc;
            return;
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
