class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
         vector<int> temp = nums;
        int n = temp.size();
    
        vector<int> maxLeft(n), minLeft(n);
    
        int currentMax = temp[0];
        int currentMin = temp[0];
        maxLeft[0] = currentMax;
        minLeft[0] = currentMin;
    
        for (int i = 1; i < n; ++i) {
            currentMax = max(currentMax, temp[i]);
            currentMin = min(currentMin, temp[i]);
            maxLeft[i] = currentMax;
            minLeft[i] = currentMin;
        }
    
        long long result = LLONG_MIN;
        for (int j = m - 1; j < n; ++j) {
            int i = j - (m - 1);
            long long p1 = 1LL * temp[j] * maxLeft[i];
            long long p2 = 1LL * temp[j] * minLeft[i];
            result = max({result, p1, p2});
        }
    
        return result;
    }
};

//Upsolve
class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        long long ans = LLONG_MIN;
        if(m == 1)
        {
            for(auto i : nums)
                ans = max(ans, (long long)i*i);
            return ans;
        }

        int n = nums.size();
        set<int> st;
        for(int i = m - 1;i < n;i++)
        {
            st.insert(nums[i - (m - 1)]);
            int mn = *(st.begin()), mx = *(st.rbegin());
            ans = max(ans, mx*(long long)nums[i]);
            ans = max(ans, mn*(long long)nums[i]);
        }
        return ans;
    }
};
