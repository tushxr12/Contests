#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;cin>>n>>x;
	vector<int> v(n);
	for(int i = 0;i < n;i++)
	    cin>>v[i];
	
	for(auto i : v){
	    if(i == x){
	        cout<<"YES";
	        return 0;
	    }
	}
	cout<<"NO";
	return 0;
}
