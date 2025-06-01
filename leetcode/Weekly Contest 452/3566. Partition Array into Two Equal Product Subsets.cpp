class Solution {
private:
    bool dfs(int ind, long long prod1, long long prod2, vector<int> &nums, long long target){
        if(prod1 > target || prod2 > target)    
            return false;
        
        if(ind == nums.size())
            return (prod1 == target && prod2 == target);
        
        bool p1 = dfs(ind + 1, prod1 * nums[ind], prod2, nums,target);
        bool p2 = dfs(ind + 1,prod1, prod2 *nums[ind], nums, target);
        return (p1 || p2);
    }
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        return dfs(0, 1, 1, nums,target);
    }
};
