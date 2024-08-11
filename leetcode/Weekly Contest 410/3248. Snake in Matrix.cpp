class Solution
{
public:
    int finalPositionOfSnake(int n, vector<string> &commands)
    {
        vector<vector<int>> grid(n, vector<int>(n));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                grid[i][j] = cnt;
                cnt++;
            }
        }

        if (commands.size() == 0)
        {
            return 0;
        }
        int ans = 0, ii = 0, jj = 0;
        for (int i = 0; i < commands.size(); i++)
        {
            if (commands[i] == "RIGHT")
            {
                jj++;
            }
            else if (commands[i] == "UP")
            {
                ii--;
            }
            else if (commands[i] == "DOWN")
            {
                ii++;
            }
            else
            {
                jj--;
            }
        }
        return grid[ii][jj];
    }
};