class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        if(n == 1)
        {
            return {-1,-1};
        }

        map<int,int> mpp;
        for(auto i : nums)
            mpp[i]++;

        bool areAllFreqsSame = true;
        int freq = -1;
        for(auto i : mpp){
            freq = i.second;
            ans.push_back(i.first);
            break;
        }

        for(auto i : mpp){
            if(i.second != freq){
                areAllFreqsSame = false;
                break;
            }
        }
        
        if(areAllFreqsSame){
            return {-1,-1};
        }

        for(auto i : mpp){
            if(i.second != freq){
                ans.push_back(i.first);
                break;
            }
        }
        
        return ans;
    }
};
