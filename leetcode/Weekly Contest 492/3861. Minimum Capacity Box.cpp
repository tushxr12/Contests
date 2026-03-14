class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int minIndex = INT_MAX;
        int minCapacity = INT_MAX;
        for(int i = 0;i < n;i++){
            if(capacity[i] >= itemSize && capacity[i] < minCapacity){
                minCapacity = min(minCapacity, capacity[i]);
                minIndex = i;
            }   
        }
        return minIndex == INT_MAX ? -1 : minIndex;
    }
};
