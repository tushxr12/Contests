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


// Better
// WIthout using extra space
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

	// Kyuki dono sorted hai so ek pointer ko 1st array ke max element pr rkho and dussre ko 2nd array ke smallest pr and then comapare them and swap if needed!
    int left = a - 1, right = 0;
    
    while(left >= 0 && right < b){
        if(v1[left] > v2[right]){
            swap(v1[left--] , v2[right++]);
        }
        else
        {
            break;
        }
    }
    
    sort(begin(v1) , end(v1));
    sort(begin(v2), end(v2));
    
    for(auto i : v1)
        cout<<i<<" ";
    for(auto i : v2)
        cout<<i<<" ";
    
    return 0;
}
