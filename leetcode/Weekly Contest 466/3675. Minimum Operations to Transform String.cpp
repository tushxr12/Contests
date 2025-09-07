class Solution {
public:
    int minOperations(string s) {
        int ans = 0;
        for(auto i : s)
        {
            if(i == 'a')
                continue;
            ans = max(ans, (int)('z' - i) + 1);
        }
        return ans;
    }
};
