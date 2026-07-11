class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int leftMax = nums[0];
        int ans = -1;
        for(int i = k;i < n;i++){
            if(nums[i-k] > leftMax)
                leftMax = nums[i-k];
            ans = max(ans, leftMax + nums[i]);
        }
        return ans;
    }
};
