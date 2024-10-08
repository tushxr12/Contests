class Solution
{
public:
    int minFlips(vector<vector<int>> &grid)
    {
        int rows = 0, cols = 0;
        int n = grid.size(), m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m / 2; j++)
            {
                if (grid[i][j] != grid[i][m - j - 1])
                    rows++;
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (grid[j][i] != grid[n - j - 1][i])
                    cols++;
            }
        }
        return min(rows, cols);
    }
};