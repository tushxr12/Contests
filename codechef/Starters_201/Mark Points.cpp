#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    
    int oc = 0, zc = 0;
    
    for(auto i : s){
        if(i == '0') zc++;
        else oc++;
    }
    
    if(oc == 0 || zc == 0){
        cout<<"YES";
        return;
    }
    
    oc = 0;
    bool foundOne = false, flag = true;
    
    for(auto i : s){
        if(i == '1'){
            foundOne = true;
            oc++;
        }
        else
        {
            if(foundOne && oc < 3){
                cout<<"NO";
                return;
            }
            foundOne = false;
            oc = 0;
        }
    }
    
    if(foundOne && oc < 3){
        cout<<"NO";
        return;
    }
    cout<<"YES";
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
