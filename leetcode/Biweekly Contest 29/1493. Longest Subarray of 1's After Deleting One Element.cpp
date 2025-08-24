class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int maxLength = 0;
        int zeroCount = 0;
        int last_zero_idx = -1;

        while(j < n){
            if(nums[j] == 0){
                i = last_zero_idx + 1;
                last_zero_idx = j;
            }

            int currLength = j - i;
            maxLength = max(maxLength, currLength);
            j++;
        }
        return maxLength;
    }
};
