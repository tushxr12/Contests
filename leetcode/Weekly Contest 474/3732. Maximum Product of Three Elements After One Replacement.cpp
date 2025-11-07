class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans = 1;
        for(int i = 0;i < nums.size();i++)
            if(nums[i] < 0)
                nums[i] = nums[i] * -1;
        sort(begin(nums), end(nums), greater<long long>());
        for(int i = 0;i < 2;i++){
            ans *= nums[i];
        }
        ans *= 1e5;
        return ans;
    }
};
