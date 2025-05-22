#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    
    if(x > y) 
        swap(x,y);
    
    if(k >= y) 
        cout<<"Alice";
    else if(k < x) 
        cout<<"Bob";
    else if(k >= y - k)
        cout<<"Alice";
    else
        cout<<"Bob";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
        cout<<"\n";
    }
    return 0;
}
