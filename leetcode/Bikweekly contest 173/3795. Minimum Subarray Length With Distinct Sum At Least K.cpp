class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        long long distinctSum = 0;
        int ans = INT_MAX;
        int left = 0, right = 0;
        unordered_map<int,int> mpp;

        while(right < n)
        {
            int currVal = nums[right];

            mpp[currVal]++;
            if(mpp[currVal] == 1)
            {
                distinctSum += currVal;
            }

            while(distinctSum >= k)
            {
                ans = min(ans, right - left + 1);
                int removeVal = nums[left];
                mpp[removeVal]--;

                if(mpp[removeVal] == 0)
                {
                    distinctSum -= removeVal;
                    mpp.erase(removeVal);
                }
                left++;
            }
            right++;
        }

        // in case its never updated
        return (ans == INT_MAX) ? -1 : ans;
    }
};
