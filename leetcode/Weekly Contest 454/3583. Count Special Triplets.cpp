//Brute
class Solution {
public:
    int mod = 1e9 + 7;
    int specialTriplets(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                for(int k = j + 1;k < n;k++){
                    if(nums[i] == nums[j] * 2 && nums[k] == nums[j]*2){
                        cnt++;
                    }
                }
            }
        }
        return (cnt%mod);
    }
};

//Better
class Solution {
public:
    int mod = 1e9 + 7;
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> right, left;
        for (int num : nums) right[num]++;

        long long cnt = 0;
        for (int j = 0; j < n; ++j) {
            right[nums[j]]--; 
            int doubleVal = nums[j] * 2;
            cnt += (long long)left[doubleVal] * right[doubleVal];
            cnt %= mod;

            left[nums[j]]++;
        }

        return cnt;
    }
};
