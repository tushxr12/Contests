class Solution {
private:
    int func(vector<int> &temp)
    {
        if(temp.size() < 2)
            return 0;
        
        set<int> st;
        for(auto i : temp)
            st.insert(i);
        
        if(st.size() < 2)
            return 0;
        
        vector<int> uniqueArray(st.begin(), st.end());
        int minDiff = INT_MAX;

        for(int i = 0;i < uniqueArray.size() - 1;i++)
        {
            int diff = abs(uniqueArray[i + 1] - uniqueArray[i]);
            minDiff = min(minDiff, diff);
        }
        return minDiff;
    }
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int> (n - k + 1));

        for(int i = 0;i <= m - k;i++)
        {
            for(int j = 0;j <= n - k;j++)
            {
                vector<int> temp(k*k);
                int c = 0;
                for(int x = i; x < i + k;x++)
                {
                    for(int y = j; y < j + k;y++)
                    {
                        temp[c++] = grid[x][y];
                    }
                }
                ans[i][j] = func(temp);
            }
        }
        return ans;
    }
};
