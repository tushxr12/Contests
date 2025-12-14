class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        int sumOfLargestK = 0;
        int sumOfSmallesK = 0;

        for(int i = 0;i < k;i++){
            sumOfSmallesK += nums[i];
            sumOfLargestK += nums[n-i -1];
        }
        int ans = abs(sumOfSmallesK - sumOfLargestK);
        return ans;
    }
};
