#include<bits/stdc++.h>

using namespace std;

void solve()
{
   int n,x;
   cin>>n>>x;
   
   if(x == 0){
       string ans(n*3,'0');
       cout<<ans;
       return;
   }
   
   int ones = x;
   int zeroes = 3*n - x;
   string s(n*3, '1');
   int index = 0;
   
   while(zeroes > 0 && index < n)
   {
       s[index] = '0';
       zeroes--;
       
       if(zeroes){
           s[index + n] = '0';
           zeroes--;
       }
       index += 1;
   }
   
   index = 0;
   while(zeroes)
   {
       s[index + 2*n] = '0';
       zeroes--;
       index++;
   }
   cout<<s;
   
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
