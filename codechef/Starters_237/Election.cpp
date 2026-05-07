#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    
    if(k > (n/2 + 1)){
        cout<<0;
    }
    else
    {
        int half = n/2;
        cout<<half - k + 1;
    }
}
