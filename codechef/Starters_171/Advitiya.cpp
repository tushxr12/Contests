#include<bits/stdc++.h> 

using namespace std;

void solve()
{
    string s;
    cin>>s;
    
    if(s == "ADVITIYA")
    {
        cout<<0;
        return;
    }
    
    int ans = 0;
    string ss = "ADVITIYA";
               //ZARAGOZA
    //1 + 3 + 4 + 8 + 13 + 
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] != ss[i])
        {
            char diff = s[i]; //Z
            char toConvert = ss[i]; //A
            if(diff < toConvert)
                ans += (toConvert - diff);
            else
            {
                // Z -> 90 A -> 65
                //Z->A
                // ans += (diff - toConvert);
                ans += (toConvert + 26 - diff);
            }
        }
    }
    cout<<ans;   
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
