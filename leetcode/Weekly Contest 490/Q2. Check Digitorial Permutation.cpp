class Solution {
public:
    bool isDigitorialPermutation(int n) {
        unordered_map<int, long long> facts = {
            {0,1}, {1,1}, {2,2}, {3,6}, {4,24}, {5,120}, {6,720}, {7,5040}, {8, 40320}, {9, 362880}
        };

        long long sum = 0;
        string numberInString = to_string(n);

        for(auto i : numberInString){
            int num = (i - '0');
            sum += facts[num];
        }

        string sumInString = to_string(sum);

        map<int, int> sumMap, nMap;
        for(auto i : sumInString){
            sumMap[i-'0']++;
        }

        for(auto i : numberInString){
            nMap[i-'0']++;
        }
        
        return (sumMap == nMap);
    }
};
