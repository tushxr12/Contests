class Solution {
public:
    bool allCharsSame(string &s)
    {
        set<char> st(begin(s), end(s));
        return (st.size() == 1);
    }
    string mergeCharacters(string s, int k) {
        int n = s.size();
        string ans = "";
        unordered_map<char,int> mpp;

        if(allCharsSame(s)){
            string ans = "";
            ans.push_back(s[0]);
            return ans;
        }
        int cnt = 0;
        for(int i = 0;i < n;i++){
            char currChar = s[i]; 

            if(mpp.find(currChar) != mpp.end() && ans.size() -1 -mpp[currChar] < k){
                continue;
            }
            
            ans += currChar;
            mpp[currChar] = ans.size() - 1;
        }
        
        return ans;
    }
};
