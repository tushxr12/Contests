class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n = balance.size();
        long long totalSum = 0, culpritIndex = -1;
        for(int i = 0;i < n;i++)
        {
            totalSum += balance[i];
            if(balance[i] < 0)
                culpritIndex = i;
        }
        if(culpritIndex == -1)
            return 0;
        
        if(totalSum < 0)
            return -1;
        
        int distance = 1;
        long long ans = 0;
        while(balance[culpritIndex] < 0){
            long long leftIndex = (culpritIndex - distance + n)%n;
            long long rightIndex = (culpritIndex + distance)%n;

            long long leftValue = balance[leftIndex];
            long long rightValue = balance[rightIndex];

            long long available = leftValue + rightValue;

            if(leftIndex == rightIndex)
                available -= leftValue;
            
            long long needed = -balance[culpritIndex];
            long long taken = min(needed, available);

            ans += (taken*distance);
            balance[culpritIndex] += taken;
            distance++;
        }
        return ans;
    }
};
