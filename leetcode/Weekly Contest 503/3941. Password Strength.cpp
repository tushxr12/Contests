class Solution {
public:
    bool isLower(char ch)
    {
        return (ch >= 'a' && ch <= 'z');
    }

    bool isUpper(char ch)
    {
        return (ch >= 'A' && ch <= 'Z');
    }

    bool isDigit(char ch)
    {
        return (ch >= '0' && ch <= '9');
    }

    bool isSpecial(char ch)
    {
        return ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$'));
    }

    int passwordStrength(string password) {
        set<char> st;
        int n = password.size();

        for(auto i : password)
            st.insert(i);
        
        int ans = 0;
        for(auto it = st.begin(); it != st.end();it++)
        {
            if(isLower(*it)){
                ans += 1;
            }
            else if(isUpper(*it)){
                ans += 2;
            }
            else if(isDigit(*it)){
                ans += 3;
            }
            else if(isSpecial(*it)){
                ans += 5;
            }
        }
        return ans;
    }
};
