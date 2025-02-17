class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i = 0;i <= s.size() - k;i++)
        {
            bool flag = true;
            for(int j = i + 1;j < k + i;j++)
            {
                if(s[i] != s[j])
                {
                    flag = false;
                }
            }
            if(i - 1 >= 0 && s[i] == s[i - 1])
                flag = false;
            if(i + k < s.size() && s[i] == s[i + k])   
                flag = false;
            if(flag)
                return true;
        }
        return false;
    }
};
