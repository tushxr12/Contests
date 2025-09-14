// DFS Approach

class Solution {
private:
    void dfs(int n, int num, int k, vector<int> &ans){
        if(n == 0)
        {
            ans.push_back(num);
            return;
        }

        int lastDigit = (num%10);

        if(lastDigit + k < 10)
            dfs(n-1, num*10 + lastDigit + k,k,ans);
        
        if(k!=0 && lastDigit - k >= 0)
            dfs(n-1, num*10 + lastDigit - k,k ,ans);
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        if(n == 1)
            return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        
        vector<int> ans;
        for(int i = 1;i < 10;i++)
            dfs(n - 1,i,k,ans);
        return ans;
    }
};
