class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        long long sum = accumulate(begin(nums), end(nums), 0LL) - nums[n-1];
        long long pd = 1;

        for(int i = n-2;i >= 0;i--){
            sum -= nums[i];
            pd *= nums[i+1];
            if(pd == sum){
                return i;
            }
            else if(pd > sum)
                break;
        }
        return -1;
    }
};
