#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    
    if(b <= 1){
        cout<<0;
        return;
    }
    
    int count = 0;
    
    while(a > 0 && b > 1){
        a -= 1;
        b -= 2;
        count += 3;
    }
    
    cout<<count;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
