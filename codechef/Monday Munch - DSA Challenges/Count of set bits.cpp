// STL Approach
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;cin>>n;
    cout<<__builtin_popcount(n);
}

// Normal Approach
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int cnt = 0;
    while(n){
        cnt += (n&1);
        n = n >> 1;
    }
    return cnt;
}

int main() {
	// your code goes here
    int n;cin>>n;
    cout<<countSetBits(n);
}
