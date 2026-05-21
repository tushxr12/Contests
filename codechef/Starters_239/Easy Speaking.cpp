#include<bits/stdc++.h>

using namespace std;

bool isConsonant(char ch)
{
    string s = "aeiou";
    if(s.find(ch) == string::npos){
        return true;
    }
    return false;
}

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(isConsonant(s[i])){
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        
        if(cnt >= 4){
            cout<<"YES";
            return;
        }
    }
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
