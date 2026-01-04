class Solution {
public:
    string reversePrefix(string s, int k) {
        string sb = s.substr(0,k);
        reverse(begin(sb), end(sb));
        string ans = sb;
        int n = s.size();
        return (ans + s.substr(k,n));
    }
};
