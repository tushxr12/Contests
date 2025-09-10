#include <iostream>
#include <string>

using namespace std;

bool validPalindrome(string s) {
    // Write your code here
    int n = s.size();
    int left = 0, right = n - 1;
    int cnt = 0;
    while(left < right){
        if(s[left] != s[right]){
            if(s[left] == s[right - 1]){
                cnt++;
                right--;
            }
            else if(s[left + 1] == s[right]){
                cnt++;
                left++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            left++;
            right--;
        }
    }
    
    if(cnt > 1)
        return false;
    return true;
    return true;
}

int main() {
  int n;
  cin>>n;
    string s;
    cin >> s;
    cout << (validPalindrome(s) ? "true" : "false") << endl;
    return 0;
}
