class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0.0;
        sort(begin(salary) , end(salary));
        for(int i = 1;i < salary.size() - 1;i++){
            ans += salary[i];
        }
        return ans/(salary.size() - 2);
    }
};
