class Solution {
public:
    vector<string> partitionString(string s) {
        vector<string> ans;
        int n = s.size();
        set<string> seen;
        string curr = "";
        for(int i = 0;i < n;i++)
        {
            curr += s[i];
            if(!seen.count(curr))
            {
                ans.push_back(curr);
                seen.insert(curr);
                curr = "";
            }
        }
        return ans;
    }
};
