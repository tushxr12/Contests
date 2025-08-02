class Solution {
private:
    int floorSqrt(int x) {
        if (x < 2) return x;

        int low = 1, high = x, ans = 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= x / mid) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
public:
    long long pickGifts(vector<int>& vec, int k) {
        long long ans = 0;
        
        while(k--)
        {
            int maxIndex = max_element(vec.begin(), vec.end()) - vec.begin();
            int flrsqrt = floorSqrt(vec[maxIndex]);
            vec[maxIndex] = flrsqrt;
        }

        for(auto i : vec)
            ans += i;

        return ans;
    }
};
