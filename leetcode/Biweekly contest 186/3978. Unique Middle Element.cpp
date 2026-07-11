class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int middleNum = nums[n/2];
        for(auto i : nums)
        {
            if(i == middleNum)
                cnt++;
        }

        return (cnt == 1);
    }
};
