#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int typeOneops = a;
    a -= (typeOneops*1);
    b -= (typeOneops*2);
    
    if((a == 0 && b == 1 && c == 3) || (a == 0 && (b*3 == c)))
        cout<<"YES";
    else
    cout<<"NO";
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
