class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int sr = x, er = x + k - 1;
        int sc = y, ec = y + k - 1;

        while(sr < er){
            for(int j = sc;j <= ec;j++)
                swap(grid[sr][j] , grid[er][j]);
            sr++;
            er--;
        }
        return grid;
    }
};
