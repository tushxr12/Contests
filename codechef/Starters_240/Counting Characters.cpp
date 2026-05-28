#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int aCount = 0, bCount = 0;
        for(auto i : s){
            if(i == 'a')
                aCount++;
            else
                bCount++;
        }
        cout<<aCount<<" "<<bCount;
        cout<<"\n";
    }
}
