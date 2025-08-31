class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        set<int> st(friends.begin(), friends.end());

        for(int i = 0;i < order.size();i++){
            if(st.find(order[i]) != st.end())
                ans.push_back(order[i]);
        }
        return ans;
    }
};
