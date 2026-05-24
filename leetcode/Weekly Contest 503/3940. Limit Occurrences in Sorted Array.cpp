class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(auto i : nums)
            mpp[i]++;
        
        vector<int> ans;
        
        int n = nums.size();
        for(auto i : mpp)
        {
            int num = i.first;
            int freq = i.second;

            if(freq > k){
                for(int i = 0;i <k;i++)
                    ans.push_back(num);
            }
            else
            {
                for(int i = 0;i < freq;i++)
                {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};
