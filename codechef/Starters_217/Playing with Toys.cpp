#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
    cin>>n>>m;
    
    if(n <= m){
        cout<<0;
    }
    else
    {
        cout<<(n-m);
    }
}
