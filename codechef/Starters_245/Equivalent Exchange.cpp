#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }
    
    
    for(int i = 0;i <= k;i++)
    {
        int red = i, blue = (k - i);
        bool isPossible = true;
        
        for(int j = 0;j < n;j++)
        {
            if(v[j] > 0)
            {
                // they give red and want similar blue
                if(blue < v[j]){
                    isPossible = false;
                    break;
                }
                red += v[j];
                blue -= v[j];
            }
            else
            {
                // they give blue and want red
                int abso = abs(v[j]);
                
                if(red < abso){
                    isPossible = false;
                    break;
                }
                blue += abso;
                red -= abso;
            }
        }
        
        if(isPossible){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
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
