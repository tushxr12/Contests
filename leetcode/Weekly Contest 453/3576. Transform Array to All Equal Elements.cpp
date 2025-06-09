class Solution {
public:
    bool canEqual(vector<int>& nums, int k, int target) {
        int n = nums.size();
        vector<int> temp = nums;
        int operations = 0;
    
        for (int i = 0; i < n - 1; ++i) {
            if (temp[i] != target) {
                temp[i] *= -1;
                temp[i + 1] *= -1;
                operations++;
                if (operations > k) return false;
            }
        }    
        return temp[n - 1] == target;
    }
    bool canMakeEqual(vector<int>& nums, int k) {
        return canEqual(nums, k, 1) || canEqual(nums, k, -1);
    }
};
