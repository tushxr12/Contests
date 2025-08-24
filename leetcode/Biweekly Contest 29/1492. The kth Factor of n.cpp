class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        for(int i = 1;i <= n;i++){
            if(n%i == 0)
                factors.push_back(i);
        }
        return k <= factors.size() ? factors[k - 1] : -1;
    }
};
