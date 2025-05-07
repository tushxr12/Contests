#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x%3 == 0)
    {
        cout<<x;
        return 0;
    }
    
    int rem = x%3;
    if(rem == 1){
        cout<<x - 1;
    }
    else
    {
        cout<<x + 1;
    }
    // cout<<min(x - rem, x + rem);
}
