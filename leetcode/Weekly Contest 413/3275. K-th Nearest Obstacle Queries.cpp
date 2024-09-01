class Solution
{
public:
    vector<int> resultsArray(vector<vector<int>> &queries, int k)
    {
        vector<int> ans;
        priority_queue<int> pq;
        for (auto q : queries)
        {
            pq.push(abs(q[0]) + abs(q[1]));
            if (pq.size() > k)
                pq.pop();
            if (pq.size() < k)
                ans.push_back(-1);
            else
                ans.push_back(pq.top());
        }
        return ans;
    }
};