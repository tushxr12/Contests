#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int sum = 0;
    for(int i = 0;i < k;i++)
        sum += v[i];
        
    int left = 0, right = k;
    int maxSum = sum;
    
    while(right < n){
        sum -= v[left++];
        sum += v[right];
        maxSum = max(maxSum, sum);
        right++;
    }
    cout<<maxSum;
}
