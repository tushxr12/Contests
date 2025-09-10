// Brute
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    cin>>a>>b;
    
    vector<int> v1(a), v2(b);
    for(int i = 0;i < a;i++){
        cin>>v1[i];
    }
    
    for(int i = 0;i < b;i++){
        cin>>v2[i];
    }
    
    vector<int> v3;
    for(int i = 0;i < a;i++){
        v3.push_back(v1[i]);
    }
    
    for(int i = 0;i < b;i++){
        v3.push_back(v2[i]);
    }
    
    sort(begin(v3) ,end(v3));
    
    for(auto i : v3)
        cout<<i<<" ";
    return 0;
}
