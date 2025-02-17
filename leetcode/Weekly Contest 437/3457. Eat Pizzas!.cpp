class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        long long ans = 0;
        int n = pizzas.size();
        long long days = n/4;
        sort(pizzas.begin(), pizzas.end());
        int currIndex = n - 1;
        for(int day = 1; day <= days; day+=2)
            ans += pizzas[currIndex--];
        currIndex--;
        for(int day = 2; day <= days;day+=2)
        {
            ans += pizzas[currIndex];
            currIndex -= 2;
        }
        return ans;
    }
};
