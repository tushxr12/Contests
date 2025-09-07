class Solution {
public:
    int minOperations(vector<int>& nums) {
        //[1 3 5]
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(nums[0] == nums[n - 1])
            return 0;
        return 1;
    }
};
