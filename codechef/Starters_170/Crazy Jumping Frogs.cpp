#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        int oc = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>v[i];
            if(v[i]%2)
                oc++;
        }
        cout<<max(oc, n - oc)<<"\n";
    }
}
